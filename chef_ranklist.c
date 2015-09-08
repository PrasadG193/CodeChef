#include<stdio.h>
#include<math.h>



int main()
{
	int t;
	float n,s,sum;
	long int root,res;
	scanf("%d",&t);	
	while(t--)	
	{
		scanf("%f%f",&n,&s);
		sum=n*(n+1)/2;
		if(n==s)
			res=s-1;
		else if((long int)((-1+sqrt((float)(1+(8*s))))/2)==n)
			res=0;
		else
		{
			root=(long int)((-1+sqrt((float)(1+(8*(s-n)))))/2);
			res=n-(root+1);
		}
		printf("%ld\n",res);
		
	}
	
	return 0;
}
