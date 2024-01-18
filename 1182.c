#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{

	srand(time(0));//シードをパソコンの時計に設定

	int intelligence = (rand() % 20) + 1;
	int stamina = (rand() % (20 - intelligence));
	int charisma = (20 - intelligence - stamina);


	if (intelligence > stamina && intelligence>charisma) {
		printf("mageです");
	}

	else if (stamina > intelligence && stamina >charisma) {
		printf("knightです");
	}

	else if(charisma>intelligence && stamina<charisma)
	{
		printf("thiefです");
	}

	else {
		printf("ガリポン先生です");
	}

	printf("intelligence=%d,stamina=%d,charisma=%d", intelligence, stamina, charisma);

	return 0;

}