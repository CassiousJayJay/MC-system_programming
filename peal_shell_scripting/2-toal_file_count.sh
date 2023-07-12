#!//usr/bin/bash
if [! -d "$1"]; then
	echo "Invalid directory"
	exit 1
fi
file_count=0
dir_count=0
