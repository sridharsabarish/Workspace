# Read from the file file.txt and output the tenth line to stdout.
#!usr/bin/env bash

file="file.txt"
COUNTER=0;
while read -r line; do
    COUNTER=$(( COUNTER + 1 ))
    if test $COUNTER -eq 10
    then
        echo -e "$line"
    fi
done <$file 
