#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*�\���̂̐錾*/
typedef struct {
	char name[32];
	char tel[32];
}MYDATA, *LPMYDATA;

/*�v���g�^�C�v�錾*/
int menu();
int rosterInput(LPMYDATA);
int rosterOutput(LPMYDATA);

int main(){
	int mode, repeatFlg = 1;

	/*�f�[�^�̏�����*/
	MYDATA mydata = { "", "" };

	/*�|�C���^�̏�����*/
	LPMYDATA lpMyData = &mydata;

	do {
		mode = menu();

		switch (mode){
		case 1:
			rosterInput(lpMyData);
			break;
		case 2:
			rosterOutput(lpMyData);
			break;
		default:
			repeatFlg = 0;
			break;
		}
	} while (repeatFlg);

	system("pause");
	return 0;
}

int menu(){
	char ret[8];
	printf_s("\n***** MENU *****\n");
	printf_s("1: �f�[�^����\n");
	printf_s("2: �f�[�^�\��\n");
	printf_s("0: �I��\n");
	printf_s("***************\n");
	printf_s("-----> ");
	gets_s(ret);

	return atoi(ret);
}

int rosterInput(LPMYDATA lpData){
	printf_s("����--");
	gets_s(lpData->name);
	printf_s("�d�b�ԍ�--");
	gets_s(lpData->tel);

	return 0;
}

int rosterOutput(LPMYDATA lpData){
	if (!strcmp(lpData->name, "")) {
		printf("�f�[�^������܂���\n");
		return -1;
	}
	printf_s("���� -- %s\n", lpData->name);
	printf_s("�d�b�ԍ� -- %s\n", lpData->tel);

	return 0;
	}