#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,i,tmp,n,sum,cnt;
	vector<int> v;
	cin>>t;
	while(t--)
	{
		v.clear();
		sum=0;
		cnt=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		for(i=n-1;i>=0;i--)
		{
//			cout<<v[i]<<" ";
			sum=sum+v[i];
			cnt++;
			if(cnt%2==0)
				i=i-2;
			
		}
		cout<<sum<<"\n";
	}

	return 0;
}
