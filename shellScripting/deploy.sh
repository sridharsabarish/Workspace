#!/bin/sh
cd ~/Projects/Workspace
git pull -v
git add .

if git diff-index --quiet HEAD --; then
	echo "Nothing to Commit"
else

	git commit -m "Coding Practice, `date +'%Y-%m-%d %H:%M:%S'`";
	git push
	echo "Successfully pushed to github"
        open --new -a "Google Chrome" --args "https://github.com/sabarish-sridhar"
fi
cd ~
