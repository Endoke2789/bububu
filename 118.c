#include<stdio.h>
#include<math.h>

int main(void)
{
	float a, b, c;
	float discriminant;
	float kai1, kai2;

	printf("2���������̒萔�����\n");

	printf("a=");
	scanf_s("%f", &a);
	if (a == 0)
	{
		printf("0�ȊO�̐�������͂��Ă�������\na=");
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

		printf("2���������̉�:x=%.2f,%.2f\n", kai1, kai2);

	}

	else if (discriminant == 0)
	{
		kai1 = kai2 = -b / (2 * a);

		printf("2���������̉�:x=%.2f,%.2f\n", kai1, kai2);
	}

	else {
		printf("�������܂���");
	}

	return 0;
}