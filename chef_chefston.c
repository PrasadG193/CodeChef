#include<stdio.h>
int main()
{
	int t;
	long long int n,i,j,k,a[100001];
	double max;
	scanf("%d",&t);
	while(t--){
		max=0;
		scanf("%Ld%Ld",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%Ld",&j);
			if(j==0)
				a[i]=k;
			else
				a[i]=(k/j);
		}
		for(i=0;i<n;i++)
		{
			scanf("%Ld",&j);
			j=j*a[i];
			if(j>max)
				max=j;
		}
		printf("%.0lf\n",max);
		
	}
	return 0;
}
