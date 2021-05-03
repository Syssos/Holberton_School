#!/usr/bin/node

const req = require('request');
let URL = process.argv[2];

req.get(URL).on('response', function (response) {
  console.log(`code: ${response.statusCode}`);
});
