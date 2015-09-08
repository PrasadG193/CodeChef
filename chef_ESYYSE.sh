#!/bin/bash/
read t
n=0
tmp=0
while [ $t -gt 0 ]
do
	read n
	tmp=$((n%2))
	if [ $tmp -eq 1 ];
	then 
		let n=$n-1
	fi
	echo $n
	let t=$t-1
done
exit 0
