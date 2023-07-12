#!/usr/bin/bash


FILE={1}
max=0

cat ${FILE} |
	while read value
	do
		if [ ${value} -gt ${max} ]
		then
			max=${value}
		fi
	done
	echo ${max}
