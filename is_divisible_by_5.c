#include<stdio.h>
void main()
{
	int input;
	printf("Enter number to check divisible by 5: ");
	scanf("%d",&input);
	if(input%5==0)
		printf("\nYes, %d is divisible by 5",input);
	else
		printf("\nNo, %d isn't divisible by 5",input);
}
