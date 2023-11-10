#include <stdio.h>

int main(void)
{
	int count;

	for (count = 1; count <= 10000; count++)
	{
		if (count % 13 == 0) {
			printf("%d\n", count);
		}

		else if (count % 17 == 0) {
			printf("%d\n", count);
		}
	}

}

		