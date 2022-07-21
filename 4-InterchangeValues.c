#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("\nAfter interchanging\n");
	c=a;
	a=b;
	b=c;
	printf("A: %d\tB: %d",a,b);
}
