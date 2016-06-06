#include <stdio.h>

int main(void) 
{
	int n,n1,sum=0;
	scanf("%d",&n);
	n1=n;
	while(n)
	{
		int x=n%10;
		sum=sum+(x*x*x);
		n=n/10;
	}
	if(sum==n1)
	{
		printf("Amstrong number");
	}
	else
	{
		printf("Not Amstrong number");
	}
	return 0;
}
