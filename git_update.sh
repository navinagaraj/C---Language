/************************************************/
/* Author	: Naveenkumar N                 */
/* Date		: 26-08-2020                    */
/* Filename	: git_update.sh                 */
/* Description	: It used to push your reposit- */
/*                ories                         */
/************************************************/
#!/bin/bash
git add -A
echo "Git commit purpose"
read data
git commit -m "$data"
git push -u
