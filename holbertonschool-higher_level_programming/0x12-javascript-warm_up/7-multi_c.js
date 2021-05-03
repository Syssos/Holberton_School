#!/usr/bin/node
if (isNaN(parseInt(process.argv[2]))) {
  console.log('Missing number of occurrences');
} else {
  const all = parseInt(process.argv[2]);
  for (let x = 0; x < all; x++) {
    console.log('C is fun');
  }
}
