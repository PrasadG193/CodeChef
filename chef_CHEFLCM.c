/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
* Author : Prasad J Ghangal					*
* Title : Codechef-Chef and Interview				*
* Algorithm : Brute Force/adhoc					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <stdio.h>
#include<math.h>
#include<string.h>
#define gc getchar_unlocked
#define N 31625
char prime[N];

long long int get()
{
	register char c=gc();
	long long int ret=0;
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		ret=ret*10+(c-48);
		c=gc();
	}
	return ret;
}
int getnext(int i)
{
	int j;
	for(j=i+1;j<N;j++)
	{
		if(prime[j]=='1')
			return j;
	}
	return j;
}

long long int factor(long long int n)

{
//	int factors[31624]={0};
	long long int res=1,count=1,cnt=0;
	int i=2;
	while(n>1)
	{
		if(n%i==0)
		{
			cnt++;
			n=n/i;
			count=count+pow(i,cnt);
		}
		else
		{
			i=getnext(i);
			if(i>sqrt(n))
				i=n;
			if(cnt>0)
			{
				cnt=0;
				res=res*count;
				count=1;
			}
		}
	}
	res=res*count;
	return res;
}
int main()
{
	long long int n,t,i,j;
	memset(prime,'1',sizeof(prime));
	for(i=2;i<=sqrt(N)+2;i++)
		for(j=i*i;j<N;j=j+i)
		{
			prime[j]='0';
		}
	t=get();
	while(t--)
	{
		n=get();
		printf("%lld\n",factor(n));
	}
	return 0;
}
