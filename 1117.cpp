#include<stdio.h>

int main(void)
{


	char a;

	printf("文字を入力:");
	scanf_s("%C", &a);

	if ((a >= 'A' && a <= 'Z')) {
		printf("大文字は含まれています");
	}
	else if (a <= 'a' && a <= 'z') {
		printf("大文字は含まれていません");
	}

	return 0;
}