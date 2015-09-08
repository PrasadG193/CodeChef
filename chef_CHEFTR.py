p=input()
while(p):
	s=raw_input()
	s=s.split()
	n=(int)(s[0])
	k=(int)(s[1])
#	t=n-k;
#	t=min(t,k)
	k1=3
	res=1
	res1=1
	while(k1):
		res=res*n
		n-=1
		res1=res1*k1
		k1-=1
	total=res/res1
#	print total
	k1=3
	res=1
	res1=1
	while(k1):
		res=res*k
		k-=1
		res1=res1*k1
		k1-=1
#	print res/res1
	total=total-(res/res1)
	print total

	p-=1
