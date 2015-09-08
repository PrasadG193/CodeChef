#!/bin/bash
read t
tmp=0
n=0
while [ $t -ge 1 ]
do 
	read n
	tmp="${n:0:1}"
	tmp="$((tmp&1))"
	if [ $tmp -eq 1 ]
	then
		echo "ODD"
	else
		echo "EVEN"
	fi
	let t=$t-1
done
exit 0
