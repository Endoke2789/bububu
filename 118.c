#include<stdio.h>
#include<math.h>

int main(void)
{
	float a, b, c;
	float discriminant;
	float kai1, kai2;

	printf("2ŽŸ•û’öŽ®‚Ì’è”‚ð“ü—Í\n");

	printf("a=");
	scanf_s("%f", &a);
	if (a == 0)
	{
		printf("0ˆÈŠO‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\na=");
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

		printf("2ŽŸ•û’öŽ®‚Ì‰ð:x=%.2f,%.2f\n", kai1, kai2);

	}

	else if (discriminant == 0)
	{
		kai1 = kai2 = -b / (2 * a);

		printf("2ŽŸ•û’öŽ®‚Ì‰ð:x=%.2f,%.2f\n", kai1, kai2);
	}

	else {
		printf("“š‚¦‚ç‚ê‚Ü‚¹‚ñ");
	}

	return 0;
}