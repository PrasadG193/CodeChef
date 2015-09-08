#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	int t;
//	char a[100000];
	string a,b,t1;
	scanf("%d",&t);
	getline(cin,t1);
//	t=(int)(t1)-97;
//	cin>>t;
	while(t--)
	{
		b="";
		//scanf("%s",a);
		getline(cin,a);
		
		for(int i=0;i<a.length();i++)
		{
		//	if(a[i]==" ")
		//		b=b+"/ ";
			if((a[i]<'0')||(a[i]>'9'))
				b=b+a[i];
		}
//		b=b+'\0';
		/*if(b==""){
			t++;
			continue;
		}*/
		cout<<b<<endl;
	}
	return 0;
}
