
import math
t=input()
while(t):
	s=raw_input()
	s=s.split()
	n=(int)(s[0])
	m=(int)(s[1])
	q=(int)(s[2])
	n1=n
#	print n,m,q
	while(q):
		res=0
		res1=0
		n=n1
		r=input()
		s=n-r
		r=max(r,s)
		s=n-r
		while(not(n==r)):
			res=res+(math.log10(pow(n,n)))
			res1=res1+(math.log10(pow(s,s)))
			n-=1
			s-=1
		res=res-res1
		res=pow(10,res)
#		res=res%m
#		while(s):
#			res=(res/(pow(s,s)))
#			s-=1
		res=res%m
		z=math.modf(res)
		b=z[0]
		if(b>0.5):
			print int(res)+1
		else:
			print int(res)
		
		q-=1
	
	t-=1
