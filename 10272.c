#include<stdio.h>

int main(void)
{
   int a, surplus, result;
   printf("Please enter number: ");
   scanf_s("%d", &a);
   surplus = a % 2;

   if (a % 2 == 0)
   {
	   result = a % 2;
	   printf("%d/%d==%d\n", a, surplus, result);
   }
   return 0;


   
}
