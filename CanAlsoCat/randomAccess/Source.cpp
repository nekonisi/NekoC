#define RECORDLEN 33

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *fp;
	char fileName[256], data[256], ans[8];
	int no;

	printf("�t�@�C����(�g���q�s�v)-- ");
	gets_s(fileName);
	strcat_s(fileName, ".txt");

	errno_t error = fopen_s(&fp, fileName, "r");
	if (error != 0){
		perror("�t�@�C���I�[�v���ł��܂���ł����B\n");
		system("pause");
		return -1;
	}

	while(1){
		printf("���l�ڂ̃f�[�^��ǂݍ��݂܂����H--- ");
		gets_s(ans);
		no = atoi(ans);
		fseek(fp, RECORDLEN *(no-1), SEEK_SET);
		if (fscanf_s(fp, "%s", data) == EOF) {
			perror("�ǂݍ��݃G���[�ł��B\n");
			continue;
		}
		printf("[����] %s", data);
		fscanf_s(fp, "%s", data);
		printf("[�d�b] %s\n", data);
		printf("�����܂���(y/n): ");
		gets_s(ans);
		if (strcmp(ans, "n") == 0 || strcmp(ans, "N") == 0){
			break;
		}
	} 
	fclose(fp);

	system("pause");
	return 0;
}