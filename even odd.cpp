#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter a number\n");
	scanf_s("%d", &a);
	if (a%2==0)
	{
		printf("number is even\n");
	}
	else
	{
		printf("number is odd\n");

	}
	return 0;
}