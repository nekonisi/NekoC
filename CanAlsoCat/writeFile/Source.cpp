#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int myWrite(FILE *);

int main(){
	FILE *fp;
	char fileName[256];

	printf("�t�@�C����(�g���q�s�v)--- ");
	gets_s(fileName);
	strcat_s(fileName, ".txt"); /*�������A��*/

	errno_t error = 0;
	error = fopen_s(&fp, fileName, "a"); /*�ǉ����[�h*/
	if (fp == NULL){
		perror("�t�@�C���̃I�[�v���Ɏ��s���܂����B\n");
		return -1;
	}
	while (!myWrite(fp));
	fclose(fp);
	system("pause");
	return 0;
}

int myWrite(FILE *file){
	char name[16];
	char tel[16];
	char yesNo[8];

	char *format = "%-15s\t%-15s\n";

	printf("����-- ");
	gets_s(name);
	printf("�d�b-- ");
	gets_s(tel);

	printf(format, name, tel);
	printf("���̃f�[�^���������݂܂���(y/n): ");
	gets_s(yesNo);
	if (strcmp(yesNo, "Y") == 0 || strcmp(yesNo, "y") == 0){
		fprintf_s(file, format,name,tel);
	} 

	printf("����Ƀf�[�^����͂��܂����H(y/n): ");
	gets_s(yesNo);
	if (strcmp(yesNo, "N") == 0 || (strcmp(yesNo, "n") == 0)){
		return -1;
	}
	return 0;
}