import math
t=input()
while(t):
	max1=0
	s=raw_input()
	s=s.split()
	n=(int)(s[0])
	k=(int)(s[1])
	s=raw_input()
	s=s.split()
	for i in xrange(0,k):
		if((int)(s[i])>max1):
			max1=(int)(s[i])
	print math.factorial(n)%max1
	t-=1
