#include <stdio.h>
#include <stdlib.h>

int main(){
	int *pi, no, i;

	printf("�����̐����l����͂��܂����H--");
	scanf_s("%d", &no);
	//pi = (int *)malloc(sizeof(int) *no);
	pi = (int *)malloc(sizeof(int) *no);
	
	if (pi == NULL){
		perror("�������̊m�ۂɎ��s���܂����B");
		return -1;
	}
	for (i = 0; i < no; i++){
		printf("%d�ڂ̃f�[�^---", i + 1);
		scanf_s("%d", pi + i);
	}
	printf("���͂��ꂽ�f�[�^�͎��̒ʂ�\n");
	for (i = 0; i < no; i++){
		printf("No.%d = %d\n", i + 1, *(pi + i));
	}
	free(pi);
	return 0;
}