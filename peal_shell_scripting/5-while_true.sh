#!/usr/bin/bash

FILE=${1}
max=0
values='cat ${FILE}'
for value in ${values}
do
	if [ ${value} -gt ${max} ]
	then
		max=${value}
	fi
done
echo ${max}
