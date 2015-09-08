/*Author: Prasad Ghangal*/

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int rd[8]={-1,-1,-1,0,0,1,1,1};
int cd[8]={-1,0,1,-1,1,-1,0,1};
int r,c,max1=0;
//int index1=0;

int backtrack(int a[][200],int cr,int cc,int count)
{
	int nr,nc,tmp;
//	cout<<"cr="<<cr<<" cc="<<cc<<" val="<<a[cr][cc]<<" count"<<count<<endl;
	if(max1<count)
		max1=count;
	if(a[cr][cc]==count)
	{	
		for(int i=0;i<8;i++)
		{
		
			nr=cr+rd[i];
			nc=cc+cd[i];


			if(nr<0||nr>(r-1)||nc<0||nc>(c-1))
				continue;

			if(a[nr][nc]!=(count+1))
				continue;

			tmp=backtrack(a,nr,nc,count+1);

		//	cout<<"inner tmp:"<<tmp<<endl;
	//		if(tmp)
	//			return tmp;
		}
		
	}
	
	return max1+1;
}
int main()
{

	int a[200][200],t,max,tmp;
//emset(a,0,sizeof(a));
	scanf("%d",&t);
	while(t--)
	{
		max=0;	
		scanf("%d%d",&r,&c);
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				scanf("%d",&a[i][j]);
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(a[i][j]==0)	
				{
					max1=0;
					tmp=backtrack(a,i,j,0);
		//			cout<<"tmp"<<tmp<<endl;
					if(tmp>max)
						max=tmp;
				}
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
