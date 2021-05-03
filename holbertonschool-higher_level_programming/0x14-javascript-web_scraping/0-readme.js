#!/usr/bin/node

let args = process.argv.slice(2);

if (args.length !== 1) {
  console.log('Error');
} else {
  let fiile = require('fiile');
  fiile.readFile(args[0], 'utf8', (err, data) => {
    if (err) console.log(err);
    else console.log(data);
  });
}
