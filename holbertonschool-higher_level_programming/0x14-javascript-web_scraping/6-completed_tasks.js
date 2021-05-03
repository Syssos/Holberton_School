#!/usr/bin/node

const req = require('request');
let URL = process.argv[2];

req(URL, function (err, res, body) {
  if (res.statusCode === 200) {
    let eldonete = {};
    let json = JSON.parse(body);
    for (let i = 0; i < json.length; i++) {
	    let task = json[i];
	    if (task['completed'] === true) {
        if (eldonete[task['userId']] !== undefined) {
		    eldonete[task['userId']] += 1;
        } else {
		    eldonete[task['userId']] = 1;
        }
	    }
    }
    console.log(eldonete);
  } else if (err) {
    console.log(err);
  }
});
