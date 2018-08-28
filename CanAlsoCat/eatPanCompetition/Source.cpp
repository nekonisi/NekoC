#define PAN "�p���H������"
#define RUN "100m ����"
#define NO 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

int myinput(LPDATA, char *, char *, char *);

int main(){
	DATA data[NO];
	LPDATA lpdata;
	int i;

	lpdata = data;

	myinput(lpdata + 0, "�c��", PAN, "1");
	myinput(lpdata + 1, "����", RUN, "20.5");
	myinput(lpdata + 2, "���c", PAN, "2");
	myinput(lpdata + 3, "����", PAN, "4");
	myinput(lpdata + 4, "����", RUN, "15.2");
	myinput(lpdata + 5, "���", PAN, "3");

	printf("%4s\t%-14s\t%4s\n"
		, "����", "���Z��", "����");
	printf("-------------------------------\n");
	for (i = 0; i < NO; i++){
		printf("%4s\t%-14s\t", data[i].name, data[i].kind);
		if (strcmp(data[i].kind, RUN) == 0){
			printf("%4.1f�b\n", data[i].record.time);
		}
		else{
			printf("%4d��\n", data[i].record.time);
		}
	}
	system("pause");
	return 0;
}

int myinput(LPDATA lpData, char *name, char *kind, char *record){
	strcpy_s(lpData->name, name);
	strcpy_s(lpData->kind, kind);
	if (!strcmp(kind, PAN)){
		lpData->record.rank = atoi(record);
	}
	else{
		lpData->record.time = atof(record);
	}
	return 0;
}
