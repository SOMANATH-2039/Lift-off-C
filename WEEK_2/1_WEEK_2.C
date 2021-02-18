#include <stdio.h>
int main()
{
	int n,R,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while (n>0)
	{
		R=n%10;
		sum=sum+R;
		n=n/10;
	}
	
	printf("sum of the digits of the given number %d",sum);
	return 0;
}