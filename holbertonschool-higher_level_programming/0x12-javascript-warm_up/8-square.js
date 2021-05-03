#!/usr/bin/node
if (isNaN(parseInt(process.argv[2]))) {
  console.log('Missing size');
} else {
  const all = parseInt(process.argv[2]);
  for (let x = 0; x < all; x++) {
    console.log('X'.repeat(all));
  }
}
