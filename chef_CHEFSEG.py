import math
from decimal import Decimal

t=input()
while(t):
	r=0

	s=raw_input();
	s=s.split()
	n=(int)(s[0])
	k=(int)(s[1])
#	print n,k
	l=math.modf(math.log(k)/math.log(2))
	x=l[1]
#	if(x<=0):
#		x=1
	r=(n/(math.pow(2,x+1)))
	r=r+(r*2*(k-math.pow(2,x)))#+((k-x)*(n/(math.pow(2,x+1))))
#	r=r*k
	
	print Decimal(r)
	t-=1
