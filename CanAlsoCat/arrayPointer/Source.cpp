#include <stdio.h>
#include <stdlib.h>

int main(){
	char *str[6] = {
		"abc",
		"de",
		"fghi",
		"jklmnop",
		"qrs",
		"tuvwxyz"
	};

	int count;
	for (count = 0; count < 6; count++){
		printf("str[%d]�̃A�h���X = %p\n", count, &str[count]);
		printf("str[%d][0]�̒l = %c\n", count, str[count][0]);
	}
	system("pause");
	return 0;
}