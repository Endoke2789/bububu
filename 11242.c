#include<stdio.h>
#include<string.h>

int main() {

	char a[100];

	printf("Please Enter a Password");
	scanf("%99s", a);

	int upperCaseCount = 0;
	int length = strlen(a)
		; int upperCaseCount1 = 0;
	int upperCaseCount2 = 0;
	int upperCaseCount3 = 0;

	for (int i = 0; i < length; i++) {


		if (a[i] >= 'a' && a[i] <= 'z') {
			upperCaseCount2++;
		}

		else if (a[i] >= 'A' && a[i] <= 'Z') {
			upperCaseCount3++;
		}
		else {
			upperCaseCount1++;
		}
	}

	if (upperCaseCount1 > 0 && upperCaseCount2 > 0 && upperCaseCount3 > 0 && length >= 8 && length <= 16) {
		printf("ðŒ‚ð–ž‚½‚µ‚Ä‚¢‚Ü‚·");
	}

	else {
		printf("ðŒ‚ð–ž‚½‚µ‚Ä‚¢‚Ü‚¹‚ñ");
	}
}
