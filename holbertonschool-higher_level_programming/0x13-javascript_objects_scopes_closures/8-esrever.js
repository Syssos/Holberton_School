#!/usr/bin/node

exports.esrever = function (list) {
  let newl = [];
  for (let i = list.length - 1; i >= 0; i--) {
    newl.push(list[i]);
  }
  return newl;
};
