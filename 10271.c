#include<stdio.h>

int main(void)
{
	int a, b, c;
	printf("Please enter number?:");
	scanf_s("%d", &a);
	printf("Please enter other number?:");
	scanf_s("%d", &b);
	c = a * b;
	printf("c=%d\n", c);
	return 0;
}
