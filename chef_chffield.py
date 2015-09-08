
import math
def isPrime(n):
	if(n<=3):
		return True
	else:
		for i in xrange(2,(int)(math.sqrt(n)+2)):
			if(n%i==0):
				return False
	return True

t=input()
while(t):
	s=raw_input()
	s=s.split()
	l=(int)(s[0])
	b=(int)(s[1])
	if(isPrime(l)):
		if(l<=3):
			l=1
		else:
			l-=1
	if(isPrime(b)):
		if(b<=3):
			b=1
		else:
			b-=1
	print l*b
	t-=1
