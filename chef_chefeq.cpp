#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int t,n,tmp,i,count,max1;
	vector<int> v;
	scanf("%d",&t);
	while(t--)
	{
		max1=0;
		count=1;
		v.clear();
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&tmp);
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		for(i=0;i<n-1;i++)
		{
			if(v[i]==v[i+1])
				count++;
			else
				count=1;
			if(max1<count)
				max1=count;
		}
		printf("%d\n",n-max1);
	}
	return 0;
}
