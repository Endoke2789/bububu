#include<stdio.h>
#include<math.h>

int main(void)
{
	float a, b, c;
	float discriminant;
	float kai1, kai2;

	printf("2次方程式の定数を入力\n");

	printf("a=");
	scanf_s("%f", &a);
	if (a == 0)
	{
		printf("0以外の数字を入力してください\na=");
		scanf_s("%f", &a);
	}


	printf("b=");
	scanf_s("%f", &b);

	printf("c=");
	scanf_s("%f", &c);

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0) 
	{

		kai1 = (-b + sqrt(discriminant)) / (2 * a);
		kai2 = (-b - sqrt(discriminant)) / (2 * a);

		printf("2次方程式の解:x=%.2f,%.2f\n", kai1, kai2);

	}

	else if (discriminant == 0)
	{
		kai1 = kai2 = -b / (2 * a);

		printf("2次方程式の解:x=%.2f,%.2f\n", kai1, kai2);
	}

	else {
		printf("答えられません");
	}

	return 0;
}