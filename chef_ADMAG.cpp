/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Chef-ADMAG						*
* Category : DP							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <vector>
#define gc getchar_unlocked
#define ull unsigned long long
using namespace std;


ull fin()
{
	ull res=0;
	register char c=gc();
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

int main()
{
	ull t,n;
	int l,i;
	vector<ull> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(1);
	l=v.size();
	while(v[l-1]<=1000000000000000000)
	{
		v.push_back(v[l-1]+v[l-2]);
		l=v.size();
	}
	//for(i=0;i<l;i++)
	//	printf("%llu\n",v[i]);


	t=fin();
	while(t--)
	{
		n=fin();
		for(i=0;i<l;i++)
			if(v[i]>n)
				break;
		printf("%d\n",i-2);
	}
	return 0;
}
