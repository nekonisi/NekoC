#include <stdio.h>
#include <stdlib.h>

int main(){
	int choise;

	/*�I���t���O*/
	int endFlg = 0;

	while (1){
		printf("********** Menu **********\n");
		printf("A: �Q�[��\n");
		printf("B: ���y\n");
		printf("C: �\�v�Z\n");
		printf("X: �I��\n");
		printf("*************************\n");
		printf("-------> ");

		while (1) {
			choise = getchar();
			if (choise != '\n'){
				break; //while���[�v�𔲂���
			}
		}

			switch (choise){
			case 'A':
			case 'a':
				printf("\n �Q�[���΂��肵�Ȃ��ł�������\n\n");
				break;
			case 'B':
			case 'b':
				printf("\n ���y���I������܂����B\n\n");
				break;
			case 'C':
			case 'c':
				printf("\n �\�v�Z���I������܂����B\n\n");
				break;
			case 'X':
			case 'x':
				endFlg = 1;
				break;
			default:
				printf("�s���ȓ��͂ł��B\n\n");
				break;
			}
			if (endFlg == 1){
				break;
			}
		}
		printf("\n �I���ł��B\n");
		system("pause");
		return 0;
}