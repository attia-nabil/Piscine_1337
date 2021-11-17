#!/bin/sh
find . -type f -o -type d -name "*" | wc -l | tr -d ' '  
