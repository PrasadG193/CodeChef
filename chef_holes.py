t=input()
while(t):
	s1=raw_input()
	c=0
#	l=len(s1)
	s2="QROPADB"
	for i in range(0,len(s1)):
		for j in range(0,7):
			if(s1[i]==s2[j]):
				if(s1[i]=='B'):
					c=c+2
				else:
					c=c+1
				break
	print c
	t=t-1
	
