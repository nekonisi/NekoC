#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

int main(){
	double *pd, *pd2, sum = 0;
	int no = 0, i;
	char szData[32];

	pd = (double *)malloc(0);
	if (pd == NULL){
		perror("�̈�m�ۂɎ��s\n");
		exit(-1);
	}

	while (1){
		printf("���l����͂��Ă��������B(E�ŏI��): ");
		gets_s(szData);
		if (strcmp(szData, "E") == 0 || strcmp(szData, "e")==0){
			printf("���͂��I�����܂��B\n");
			break;
		}

		pd2 = (double *)realloc(pd, sizeof(double) * (no + 1));
		if (pd2 == NULL){
			perror("�̈�̃T�C�Y�ύX�Ɏ��s���܂����B\n");
			free(pd); /*���łɊm�ۂ��Ă��郁���������*/
			exit(-2);
		}
		pd = pd2;
		pd[no] = atof(szData);
		sum += pd[no];
		no++;
	}
	if (no){
		for (i = 0; i < no; i++){
			printf("No.%d %f\n", i + 1, pd[i]);
		}
		printf("���v\t%f\n", sum);
		printf("����\t%f\n", sum/no);
	}
	free(pd);
	return 0;
}