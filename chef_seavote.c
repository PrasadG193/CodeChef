#include<stdio.h>
int main()
{
	int t,n,b[100000],sum,i,flag,n1;
	float div;
	scanf("%d",&t);
	while(t--)
	{
		sum=0,flag=0;n1=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
			sum=sum+b[i];
			if(b[i]>100)
				flag=1;
			else if(b[i]!=0)
				n1++;
		}
		if(sum<100)
			printf("NO\n");
		else{
			sum=sum-100;
//		
//			div=(float)sum/n;
			//printf("%f\n",div);
			if(((sum<n1))&&(flag==0))
				printf("YES\n");
			else
				printf("NO\n");
		
		}
	}
	return 0;
}
