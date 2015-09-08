#include<stdio.h>
#include<math.h>
int isPerfectSquare(long int x)
{
    int s = sqrt(x);
    if (s*s == x)
	return 1;
    else 
	return 0;
}
 
int isFibonacci(long int n)
{
    if(isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4))
	return 1;
    else
	return 0;
}


int main()
{
	int t;long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&n);
		if(isFibonacci(n))
			printf("is fibo\n");
		else
			printf("not fibo\n");
	}
	return 0;
}
