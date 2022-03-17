#! /bin/bash
number=0
sums=0
while [ $number -lt 1000 ]
do
	
	
	if [ $(($number % 3)) -eq 0 ]  ||   [ $(($number % 5)) -eq 0 ]
	then
		#echo "$number"
		sums=$(($sums+$number));
		#echo "$sums"
		
	fi
	number=$(( number+1 ))
done
echo "Sum of Multiples of 3 or 5 below 1000 : $sums"
