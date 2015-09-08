#include<iostream>
using namespace std;
int main()
{	
	int t,n,a,b,i,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a>>b;
			sum=sum+a-b;
		}
		cout<<sum<<"\n";
	}
	return 0;	
}
