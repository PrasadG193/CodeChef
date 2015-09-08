t=input()
while(t):
	fg=1
	s=raw_input()
	s1=s[::-1]
	if(s1==s):
		print "YES"
		fg=0
	else:
		for i in xrange(0,len(s)):
			a=s[:i:]+s[i+1::]
			b=a[::-1]
#			print a
			if(a==b):
				print "YES"
				fg=0
				break
	if(fg):
		print "NO"
	t-=1
