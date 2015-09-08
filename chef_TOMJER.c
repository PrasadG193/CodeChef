    #include<stdio.h>
    #include<math.h>
    int main()
    {
    	int t,h;
    	long long int res;
    	scanf("%d",&t);
    	while(t--)
    	{
    		scanf("%d",&h);
    		res=(long long int)(pow(2,h-1));
    		printf("%Ld\n",res%1000);
    	}
    	return 0;
    	
    }
     