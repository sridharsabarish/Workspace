#!/bin/sh
cd ~/Projects/Workspace
git pull -v
git add .
git commit -m "Coding Practice, `date +'%Y-%m-%d %H:%M:%S'`";
git push
echo "Successfully pushed to github"

