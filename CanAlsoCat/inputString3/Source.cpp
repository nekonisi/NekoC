#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[64], *message = "���������͂��Ă�������---";
	printf(message);

	while (strcmp(gets_s(str), "")){
		printf("str is %s\n", str);
		printf(message);
	}

	system("pause");
	return 0;
}