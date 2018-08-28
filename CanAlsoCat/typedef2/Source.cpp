#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*�\���̂̐錾*/
typedef struct{
	char name[32];
	char sex[8];
}MYDATA, *LPMYDATA;

/*�v���g�^�C�v�錾*/
int menu();
int rosterInput(LPMYDATA);
int rosterOutput(LPMYDATA);

int main(){
	int mode, repeatFlg = 1;

	/*�z�� ->  �A�����郁�����̊m�ۂ̍ŏ��̃A�h���X*/
	MYDATA mydata[10];
	LPMYDATA lpMyData = mydata;

	/*�\���̂̔z��̏�����*/
	memset(mydata, '\0', sizeof(MYDATA[10]));

	do{
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
}

int menu(){
	char mode[8];
	printf("**** ���[�h�I�� ****\n"
	"1. �������\n"
	"2. ����o��\n"
	"0. �I��\n"
	"***************\n\n"
	"---------> "
	);
	gets_s(mode);
	return atoi(mode);
}

int rosterInput(LPMYDATA lpData){
	char strNo[8];
	int no;

	printf("���Ԃ̃f�[�^����͂��܂���(0-9)--");
	gets_s(strNo);
	if (strNo[0] < '0' || strNo[0] > '9'){
		printf("���͂��s���ł��B\n\n");
		return -1;
	}
	strNo[1] = '\0';
	no = atoi(strNo);

	printf("����--");
	gets_s((lpData + no)->name);
	printf("����--");
	gets_s((lpData + no)->sex);

	return 0;
}

int rosterOutput(LPMYDATA lpData){
	char strNo[8];
	int no;

	printf("���Ԃ̃f�[�^��ǂݏo���܂����H(0-9)--");
	gets_s(strNo);
	
	if (strNo[0] < '0' || strNo[0] > '9') {
		printf("���͂��s���ł��B\n\n");
		return -1;
	}
	strNo[1] = '\0';
	no = atoi(strNo);

	if (!strcmp((lpData + no)->name, "")){
		printf("�f�[�^������܂���B\n\n");
		return -1;
	}
	printf("����-- %s\n", (lpData + no)->name);
	printf("����-- %s\n\n", (lpData + no)->sex);

	return 0;
}