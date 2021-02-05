#include <stdio.h>
void main()
{
	float R,C,D,A,Pi=3.14;
	printf("Enter radius of the circle:");
	scanf("%f",&R);
	C=2*Pi*R;
	D=2*R;
	A=Pi*R*R;
	printf("\nCircumference of the circle: %f",C);
	printf("\nDiameter of the circle: %f",D);
	printf("\nArea of the circle: %f",A);
}