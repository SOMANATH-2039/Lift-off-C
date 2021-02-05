#include <stdio.h>
void main()
{
	float C,F;
	printf("Ente temperature in °C :");
	scanf("%f",&C);
	F=(C*9/5)+32;
	printf("\n");
	printf("Temperature in fahrenheit: %f",F);
}