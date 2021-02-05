#include <stdio.h>
void main()
{
	int Phy,Chem,Bio,Math,Comp,P,Q;
	printf("Enter Mark in Physics:");
	scanf("%d",&Phy);
	printf("Enter Mark in Chemistry:");
	scanf("%d",&Chem);
	printf("Enter Mark in Biology:");
	scanf("%d",&Bio);
	printf("Enter Mark in Math:");
	scanf("%d",&Math);
	printf("Enter Mark in Computer:");
	scanf("%d",&Comp);
	P=(Phy+Chem+Bio+Math+Comp)*100/500;
	printf("%d",P);
	if (P>=90){
		printf("\nYou secured Grade A");}
	else if (P>=80){
			printf("\nYou secured Grade B");
		}
	else if (P>=70){
			printf("\nYou secured Grade C");
			}
	else if (P>=60){
			printf("\nYou secured Grade D");
			}
	else if (P>=40){
			printf("\nYou secured Grade E");
			}
	else if (P<40)
	{
		printf("\nYou secured Grade F");
	}
}