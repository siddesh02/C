#include<stdio.h>
void main()
{
	int input1,input2;
	printf("Enter a number: ");
	scanf("%d",&input1);
	printf("\nEnter a number to check if divisible by previous number: ");
	scanf("%d",&input2);
	if(input1%input2==0)
		printf("\n%d is divisible by %d",input1,input2);
	else
		printf("\n%d isn't divisible by %d",input1,input2);	
}
