#include <stdio.h>
#include <stdlib.h>

int main()
{
	int _int;

	/*�|�C���^�̐錾*/
	int* pointer_int;

	/*�|�C���^�ɃA�h���X���i�[*/
	pointer_int = &_int;

	printf("�K���Ȑ����l����͂��Ă�������--- ");
	scanf_s("%d", &_int);
	printf("----------------------------------------\n");
	printf("_int\n");
	printf("\t_int(�A�h���X): %p\n", &_int);
	printf("\t_int(�l): %d\n", _int);
	printf("----------------------------------------\n");
	printf("pointer_int\n");
	printf("\tpointer_int(�A�h���X): %p\n", pointer_int);
	printf("\tpointer_int(�l): %d\n", *pointer_int);
	printf("----------------------------------------\n");

	system("pause");
	return 0;

}