#include<stdio.h>

int main(void)
{


	char a;

	printf("���������:");
	scanf_s("%C", &a);

	if ((a >= 'A' && a <= 'Z')) {
		printf("�啶���͊܂܂�Ă��܂�");
	}
	else if (a <= 'a' && a <= 'z') {
		printf("�啶���͊܂܂�Ă��܂���");
	}

	return 0;
}