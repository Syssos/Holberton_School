#!/usr/bin/node

let args = process.argv.slice(2);

if (args.length !== 2) {
  console.log('Error');
} else {
  let fiile = args[0];
  let mes = args[1];
  let fs = require('fs');
  fs.writeFile(fiile, mes, 'utf-8', (err) => {
    if (err) console.log(err);
  });
}
