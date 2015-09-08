import math

def findnoder(x,y):
	count=0
	qx=x
        qy=y
      	while not(qx==qy):
		if(qx>qy):
 			qx=qx/2	
			count+=1
                else:
                       	qy=qy/2
                      	count+=1
       	count+=1
        m=math.modf((math.log(x)/math.log(2)))
        r=m[1]
        if(r%2):
		red=count/2+count%2
   	else:
               	red=count/2
	print red


def findnodeb(x,y):
	count=0
        qx=x
        qy=y
        while not(qx==qy):
                if(qx>qy):
                        qx=qx/2
                        count+=1
                else:
                        qy=qy/2
                        count+=1
        count+=1
        m=math.modf((math.log(x)/math.log(2)))
        r=m[1]
        if(r%2):
                red=count/2
        else:
                red=count/2+count%2
        print red



t=input()
x=0
y=0
qi=0
while(t):

	s=raw_input()
	s=s.split()
	if(s[0]=="Qr"):
#		print "qr"
		x=(int)(s[1])
		y=(int)(s[2])
		qx=x
		qy=y
		if(qi==0):
			findnoder(x,y)
		else:
			findnodeb(x,y)
		
	elif(s[0]=="Qb"):
#		print("Qb")

                x=(int)(s[1])
                y=(int)(s[2])
                qx=x
                qy=y
		if(qi==0):
			findnodeb(x,y)
		else:
			findnoder(x,y)


	else:
#		print("Qi")
		if(qi==0):
			qi=1
		else:
			qi=0
	t-=1
	
