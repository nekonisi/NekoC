#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char str1[8] = "ABC";
	char str2[8] = "ABC";
	char str3[8] = "DEF";

	/*�l�̕\��*/
	printf("<�l>\n");
	printf("\tstr1's value = %s\n", str1);
	printf("\tstr2's value = %s\n", str2);
	printf("\tstr3's value = %s\n", str3);

	/*�A�h���X�̕\��*/
	printf("<�A�h���X>\n");
	printf("\tstr1's address = %p\n", &str1);
	printf("\tstr2's address = %p\n", &str2);
	printf("\tstr3's address = %p\n", &str3);
	printf("�� ����������ł��قȂ�A�h���X�Ɋi�[�����B\n");

	/*�������r*/
	// ��r���ʊi�[�p�̕ϐ�
	int cmp1;
	int cmp2;

	cmp1 = strcmp(str1, str2);
	cmp2 = strcmp(str1, str3);

	/*cmp1�̔���*/
	printf("\n<cmp1�̔���>\n");
	if (cmp1 < 0){
		printf("\t%s��%s���O�ɂ���܂��B\n", str1, str2);
	}
	else if (cmp1 >0){
		printf("\t%s��%s�����ɂ���܂��B\n", str1, str2);
	}
	else if (cmp1 == 0){
		printf("\t%s��%s�͓���������ł��B\n", str1, str2);
	}

	/*cmp2�̔���*/
	printf("\n<cmp2�̔���>\n");
	if (cmp2 < 0){
		printf("\t%s��%s���O�ɂ���܂��B\n", str1, str3);
	}
	else if (cmp2 >0){
		printf("\t%s��%s�����ɂ���܂��B\n", str1, str3);
	}
	else if (cmp2 == 0){
		printf("\t%s��%s�͓���������ł��B\n", str1, str3);
	}

	system("pause");
	return 0;

}