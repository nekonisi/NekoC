#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[8];
	size_t str_len;

	printf("���������͂��Ă�������---");
	scanf_s("%s", str,8);

	str_len = strlen(str);
	printf("%s�̒�����%d�ł��B\n", str, str_len);

	system("pause");
	return 0;
}