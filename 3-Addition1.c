#include<stdio.h>
void main()
{
	int input,count,sum=0;
	printf("Enter how many numbers to add: ");
	scanf("%d",&count);
	printf("\nEnter %d numbers \n",count);
	while(count!=0){
	scanf("\n%d",&input);
	sum=sum+input;
	count--;
	}
	printf("\nSum of above numbers: %d",sum);
}
