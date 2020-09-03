#/************************************************/
#/* Author       : Naveenkumar N                 */
#/* Date         : 03-09-2020                    */
#/* Filename     : git_update.sh                 */
#/* Description  : It used to push your reposit- */
#/*                ories                         */
#/************************************************/

#!/bin/bash
git status
echo "Enter 1 git commit"
echo "Enter 2 to exit"
read data_re # Read data from user
if [ 1 == $data_re ]
then
  git add -A  
  echo "Make commit command"
  read data		# Read a data form user
  git commit -m "$data" # Make commit
  git push -u 		# Push to master
  git pull		# pull a repository

else
   exit
fi
