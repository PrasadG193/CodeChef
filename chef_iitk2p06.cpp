#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int t;
	long long int e,o;
	double x;
	cin>>t;
	while(t--)
	{
		cin>>e>>o;
		x=2*(e+o)/5.0;
		if(x<=(int)(x))
			cout<<abs(e-x)<<"\n";
		else
			cout<<"-1\n";
	}
	return 0;
}
