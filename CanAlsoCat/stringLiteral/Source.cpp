#include <stdio.h>
#include <stdlib.h>

int main(){

	/* char�^�̃|�C���^*/
	char *str;

	str = "ABC";

	printf(" <�|�C���^�ɂ��\��>\n"
		"\t*(str + 0) = '%c'\n"
		"\t*(str + 1) = '%c'\n"
		"\t*(str + 2) = '%c' \n"
		"\t*(str + 3) = '%c' \n\n",
		*(str + 0), *(str + 1), *(str + 2), *(str + 3));

	printf(" <�z��ɂ��\��>\n"
		"\tstr[0] =  '%c'\n"
		"\tstr[1] =  '%c'\n"
		"\tstr[2] =  '%c'\n"
		"\tstr[3] =  '%c'\n\n",
		str[0], str[1], str[2], str[3]);

	system("pause");

	return 0;
}