#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[] = "ABC";
	char* str2 = "ABC";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	str1[0] = 'd';
	str1[1] = 'e';
	str1[2] = 'f';
	/*str[3]はもともと'\0(null)'なので書き換える必要なし*/

	str2 = "def";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	system("pause");
	return 0;
}