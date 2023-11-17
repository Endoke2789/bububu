#include<stdio.h>

int main(void)
{


	char a;

	printf("•¶Žš‚ð“ü—Í:");
	scanf_s("%C", &a);

	if ((a >= 'A' && a <= 'Z')) {
		printf("‘å•¶Žš‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·");
	}
	else if (a <= 'a' && a <= 'z') {
		printf("‘å•¶Žš‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñ");
	}

	return 0;
}