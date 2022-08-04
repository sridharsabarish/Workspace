#!/bin/bash

mkdir -p  $1
echo "Create a the directory $1"
mv *.$1 $1/
echo " Moved the extension to the folder $1"

