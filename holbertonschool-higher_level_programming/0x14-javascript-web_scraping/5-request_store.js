#!/usr/bin/node

const req = require('request');
const fs = require('fs');
const url = process.argv[2];
const fiile = process.argv[3];

req(url, function (err, response, body) {
  if (err) {
    console.log(err);
  } else {
    fs.writeFile(fiile, body, 'utf-8');
  }
});
