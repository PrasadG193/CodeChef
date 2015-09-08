#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<stdio.h>
using namespace std;
class abc
{
	public:
	int data;
	int val;
	abc(int p,int q)
	{
		data=p;
		val=q;
	}
};
 
bool cmp(abc p,abc q)
{
	return p.data<q.data;
}
 
int main()
{
	int n,tmp,i,max;
	list<abc> v1;
	list<abc> v2;
	list<abc>:: iterator it;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&tmp);
			v1.push_back(abc(tmp,1));
			scanf("%d",&tmp);
			v2.push_back(abc(tmp,-1));
		}	
		v1.sort(cmp);
		v2.sort(cmp);
//		sort(v2.begin(),v2.end(),cmp);
		v1.merge(v2,cmp);
		max=0;
		tmp=0;
		for(it=v1.begin();it!=v1.end();++it)
		{
			tmp=tmp+(*it).val;
//			cout<<tmp<<"\n";
//			cout<<(*it).val<<"\n";//.data<<" "<<*it.val<<" ";
			if(tmp>max)
				max=tmp;
		}
		cout<<max<<"\n";
	return 0;
}