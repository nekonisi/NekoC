#define CAT 1 /*CAT��1�ƒ�`*/
#define DOG 2 /*CAT��1�ƒ�`*/
#define RAT 4 /*CAT��1�ƒ�`*/
#define RABBIT 8 /*CAT��1�ƒ�`*/

# include <stdio.h>
# include <stdlib.h>

int main()
{
	int aPet = CAT | DOG; /*A����̃y�b�g*/
	int bPet = RAT; /*B����̃y�b�g*/
	int cPet = CAT | DOG | RAT | RABBIT; /*C����̃y�b�g*/
	int dPet = DOG | RAT; /*D����̃y�b�g*/

	printf("A����̃y�b�g(�L=%d, ��=%d, �l�Y�~=%d, �E�T�M=%d)\n",
		(aPet & CAT) != 0, (aPet & DOG) != 0, (aPet & RAT) != 0, (aPet & RABBIT) != 0);

	printf("B����̃y�b�g(�L=%d, ��=%d, �l�Y�~=%d, �E�T�M=%d)\n",
		(bPet & CAT) != 0, (bPet & DOG) != 0, (bPet & RAT) != 0, (bPet & RABBIT) != 0);

	printf("C����̃y�b�g(�L=%d, ��=%d, �l�Y�~=%d, �E�T�M=%d)\n",
		(cPet & CAT) != 0, (cPet & DOG) != 0, (cPet & RAT) != 0, (cPet & RABBIT) != 0);

	printf("D����̃y�b�g(�L=%d, ��=%d, �l�Y�~=%d, �E�T�M=%d)\n",
		(dPet & CAT) != 0, (dPet & DOG) != 0, (dPet & RAT) != 0, (dPet & RABBIT) != 0);

	system("pause");

	return 0;
}