#!/bin/bash
# Displays only the status code of the HTTP response
curl "$1" -sI -w '%{response_code}\n' -o /dev/null/
