#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	vector<long int> v;
	long int n,tmp,count;
	scanf("%d",&t);
	while(t--)
	{
		count=1;
		v.clear();
		scanf("%ld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%ld",&tmp);
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size()-1;i++)
		{
			if(v[i]!=v[i+1])
				count++;
		}
		printf("%ld\n",count);
	}
	return 0;
}
