#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[8];
	size_t str_len;

	printf("文字列を入力してください---");
	scanf_s("%s", str,8);

	str_len = strlen(str);
	printf("%sの長さは%dです。\n", str, str_len);

	system("pause");
	return 0;
}