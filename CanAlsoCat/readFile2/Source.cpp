#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *fp;
	char fileName[256];

	int c;

	printf("�t�@�C����(�g���q�s�v)--- ");
	gets_s(fileName);
	strcat_s(fileName, ".txt");
	errno_t error  = fopen_s(&fp, fileName, "r");

	if (error != 0){
		perror("�t�@�C�����I�[�v���ł��܂���\n");
		system("pause");
		return -1;
	}

	c = fgetc(fp);

	while (c != EOF){
		putc(c, stdout); //�W���o�͂�c���o��
		c = fgetc(fp);
	}

	system("pause");
	return 0;
}