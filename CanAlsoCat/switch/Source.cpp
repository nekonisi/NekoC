#include <stdio.h>
#include <stdlib.h>

void IntMode();
void CharMode();

int main()
{
	int mode;

	printf("���[�h�I��(IntMode: 0 CharMode: 1 Exit: other)");
	scanf_s("%d", &mode);

	/*���[�h�I��*/
	switch (mode) {
	case 0:
		IntMode();
		break;
	case 1:
		CharMode();
		break;
	default:
		printf("�v���O�������I�����܂��B\n");
		system("pause");
		return 0;
	}
	return 0;
}

void IntMode(){

	int input;

	printf("------------------------------------\n");
	printf("IntMode\n");
	printf("------------------------------------\n");
	printf("1����5�܂ł̐�������͂��Ă��������B\n");
	scanf_s("%d", &input);

	switch (input){
	case 1:
		printf("1�����͂���܂����B\n");
		break;
	case 2:
		printf("2����͂��܂����ˁB\n");
		break;
	case 3:
		printf("���Ȃ���3����͂��܂����B\n");
		break;
	case 4:
		printf("4�Ƃ͕s�g�ȁB\n");
		break;
	case 5:
		printf("5�����N�������ˁB\n");
		break;
	default:
		printf("1����5�܂ł̐�������͂��Ă��������B\n");
		break;
	}

	system("pause");
}

void CharMode(){

	char input;

	printf("------------------------------------\n");
	printf("CharMode\n");
	printf("------------------------------------\n");
	printf("a����c�܂ł�1�������͂��Ă��������B\n");
	scanf_s("%c", &input);

	switch (input){
	case 'a':
		printf("Kiss\n");
		break;
	case 'b':
		printf("bust\n");
		break;
	case 'c':
		printf("fuck\n");
		break;
	default:
	printf("a����c�܂ł�1�������͂��Ă��������B\n");
		break;
	}

	system("pause");

}