#include <stdio.h>
#include <stdlib.h>

int main()
{

	int _int;

	do{
		printf("�����l����͂��Ă��������B(0�ŏI��)\n");
		scanf_s("%d", &_int);
		printf("���͂��ꂽ��: %d\n",_int);
	} while (_int);

	system("pause");
	return 0;
}