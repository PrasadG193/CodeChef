t=input()
while(t):
	a=[]
	tot=0
	s1=0
	s=raw_input()
	s=s.split()
	n=int(s[0])
	m=int(s[1])
	s=raw_input()
	s=s.split()
	for i in xrange(0,n):
		a.append(int(s[i]))
		tot+=int(s[i])

	a.sort()
	
	while(m>0):
		s1+=a[m-1]
		m-=1
	print tot-(2*s1)
#	print a
	t-=1
