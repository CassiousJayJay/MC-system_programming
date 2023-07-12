#!/usr/bin/bash

names[2]="Kelvin"
names[1]="James"
names[3]="Anold"
names[4]="John Doe"

echo ${names[1]}

for names in ${names}
do
	echo ${name}
done

# C style
# echo ".........C style........."
 for ((i=0; i<=4; i++))
 do
	 echo ${names[i]}
 done
