
cd Users/kathrynscutt/data/weather.csv
git add .
git commit -m"auto push"
if [ -n "$(git status - porcelain)" ];
then
 echo "IT IS CLEAN"
else
 git status
 echo "Pushing data to remote server!!!"
 git push -u origin main
fi
