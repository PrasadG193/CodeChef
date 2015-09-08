#/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
#* Author : Prasad J Ghangal					*
#* Title : Codechef- Chef and Memory Limit			*
#* Algorithm : -						*
#* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

t=input()
while(t):
	t-=1
	n=input();
	a=raw_input()
	a=a.split()
	total=(int)(a[0])
	for i in xrange(1,n):
		x=(int)(a[i])
		y=(int)(a[i-1])
		if(x > y):
			total+=(x-y)
	print total
