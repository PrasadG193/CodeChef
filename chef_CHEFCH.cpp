#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	int t,i,count1,count2,min1,start,end,j;
	string a,x="-+",y="+-",c,b;
	scanf("%d",&t);
	while(t--)
	{
		b="";
		c="";
		count1=count2=0;
		cin>>a;
		for(i=0;i<=a.length()/2;i++)
		{
			b=b+x;
			c=c+y;
		}
		for(i=0;i<a.length();i++)
		{
			if(a[i]!=b[i])
				count1++;
			if(a[i]!=c[i])
				count2++;
		}
		cout<<min(count1,count2)<<endl;
//		cout<<b<<endl;
//		cout<<c<<endl;
	}
	return 0;
}
