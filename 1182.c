#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{

	srand(time(0));//�V�[�h���p�\�R���̎��v�ɐݒ�

	int intelligence = (rand() % 20) + 1;
	int stamina = (rand() % (20 - intelligence));
	int charisma = (20 - intelligence - stamina);


	if (intelligence > stamina && intelligence>charisma) {
		printf("mage�ł�");
	}

	else if (stamina > intelligence && stamina >charisma) {
		printf("knight�ł�");
	}

	else if(charisma>intelligence && stamina<charisma)
	{
		printf("thief�ł�");
	}

	else {
		printf("�K���|���搶�ł�");
	}

	printf("intelligence=%d,stamina=%d,charisma=%d", intelligence, stamina, charisma);

	return 0;

}