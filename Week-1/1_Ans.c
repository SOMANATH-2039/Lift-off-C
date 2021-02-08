#include <stdio.h>
void main()
{
	float a,b,c,i,d,j;
	printf("enter first number:");
	scanf("%f",&i);
	printf("enter second number:");
	scanf("%f",&j);
	a=i+j;
	b=i-j;
	c=i*j;
	
	printf("addition :%f \n",a);
	printf("subtraction :%f \n",b);
	printf("mutipplication :%f \n",c);
	
	
	if (j!=0){
		d=i/j;
		printf("division :%f \n",d);
	}
	else {
		printf("ERROR!!! division by zero not possible");}
	
}