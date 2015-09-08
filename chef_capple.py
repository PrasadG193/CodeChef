t=input()
while(t):
	app=[]
	time=1
	n=input()
	temp=raw_input()
	temp=temp.split()
	for i in temp:
		app.append(int(i))
#	print app
	app.sort()
	for i in xrange(n-1,0,-1):
#		print app[i]
#		print app[i-1]
		if not(app[i-1]==app[i]):
			time=time+1#(app[i]-app[i-1])

		
	print time
	t-=1
