#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0, score = 0, count = 0, endFlg = 0;

	while (endFlg == 0){

		printf("\n999�ŏI��\n");
		printf("%d�l�ڂ̓_������͂��Ă�������: ", count);
		scanf_s("%d", &score);

		if (0 <= score && score <= 100){
			sum += score;
			count++;
		}
		else if (score == 999){
			endFlg = 1;
		}
		else {
			printf("�s���ȓ��͂ł��B\n");
		}
	}
	printf("%d �l�̓_�������͂���܂����B\n", count);
	printf("���ϓ_��[%5.2f�_]�ł��B\n", (double)sum / count);

	system("pause");
	return 0;
}