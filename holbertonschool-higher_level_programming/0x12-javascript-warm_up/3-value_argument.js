#!/usr/bin/node
'use strict';

let len = process.argv;
if (len.slice()[2] === undefined) {
  console.log('No argument');
} else {
  console.log(len.slice()[2]);
}
