#include <stdio.h>

int main(){
	int myFunc(char*,char*);//�v���g�^�C�v�錾
	int(*ptr)(char*, char*); // �֐��ւ̃|�C���^

	ptr = myFunc;

	(*myFunc)("�c��", "�w��");
	(*ptr)("����", "��Ј�");
	myFunc("����", "���q��");

	return 0;
}

int myFunc(char *str1, char *str2){
	printf("%s����́A%s�ł��B\n", str1, str2);
	return 0;
}