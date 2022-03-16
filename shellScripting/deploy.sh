# !/bin/bash
cd ~/projects/Workspace 
git pull -v
git add .
git commit -m "Generated  on 'date' + '%Y-%m-%d %H:%M:%S'";
git push
echo "Successfully pushed to github";

