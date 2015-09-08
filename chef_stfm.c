#include<stdio.h>

long long int calc(long long int n,long int m)
{
	long long int res1=1,n1;
	n1=(n+1);
//	n=n;
//	for(i=0;i<n/2;i++)
	while(n1>1)
	{	
//		res1=res1*(2*n1)%m;
//		res2=res2*(2*n1+1)%m;
		res1=res1*n1%m;
		if(res1==0)
			break;
		n1--;
	}
//	printf("%Ld\n",res1);
	return (((res1)-1)%m+(n*n*(n+1)/2)%m)%m;
//	return res;	
}

int main()
{
	int n,i;
	long long int a[100000],sum;
	long int m;
	scanf("%d%ld",&n,&m);
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%Ld",&a[i]);
		sum=(sum+calc(a[i],m))%m;
	}
	printf("%Ld\n",sum);
	return 0;
}
