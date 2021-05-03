#!/usr/bin/node

const req = require('request');
const URL = process.argv[2];

req(URL, function (err, res, body) {
  if (res.statusCode === 200) {
    let movie = JSON.parse(body).results;
    let c = 0;
    for (let i = 0; i < movie.length; i++) {
	    for (let j = 0; j < movie[i].characters.length; j++) {
        if (movie[i].characters[j].includes('/18/')) {
		    c++;
        }
	    }
    }
    console.log(c);
  } else if (err) {
    console.log(err);
  } else {
    console.log('Invalid');
  }
});
