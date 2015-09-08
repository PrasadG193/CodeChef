#include<stdio.h>
int t,m,n,a[101];
main()
{
	int i,max,count;
	scanf("%d",&t);
	while(t--)
	{
		max=0;
		count=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>max)
				max=a[i];
		}
		for(i=0;i<n;i++)
		{
			//if(a[i]<max)
			//	a[i]=a[i]+(max)
			count=count+(max-a[i]);
		}
		count=m-count;
 
//		printf("%d\n",count);
 
		if(count%n)
			printf("No\n");
		else
			printf("Yes\n");
		
	}
	return 0;
 
}