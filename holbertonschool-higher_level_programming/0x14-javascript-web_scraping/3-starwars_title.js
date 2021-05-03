#!/usr/bin/node

const request = require('request');
let URL = 'http://swapi.co/api/films/';

request(URL + process.argv[2], function (err, res, body) {
  if (err) {
    console.log(err);
  }
  let json = JSON.parse(body);
  console.log(json.title);
});
