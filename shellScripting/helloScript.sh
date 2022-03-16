#! /bin/bash
#cat >>simple.txt;
#cat simple.txt;
: 'This
is 
a 
multi 
line
comment'


count=11

if [ $count -gt 15 ] # gt, lt, neq
then
	echo "Condition is true"
elif (( $count >10 ))
then
	echo " It is greater than 10"
else
	echo "Condition is false"
fi		
