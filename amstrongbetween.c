#include <stdio.h>

int main(void) 
{
	int a,b,i;
	
	scanf("%d %d",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		int n1=i;
		int sum=0;
		while(n1)
		{
			int x=n1%10;
			sum=sum+(x*x*x);
			n1=n1/10;
		}
		if(sum==i)
		{
			printf("%d",i);
		}
	}
	return 0;
}
