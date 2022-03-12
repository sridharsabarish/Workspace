#!/bin/sh
cd ~/Projects/Workspace
git add .
git commit -m "Leetcode, `date +'%Y-%m-%d %H:%M:%S'`";
git push
echo "Successfully pushed to github"

