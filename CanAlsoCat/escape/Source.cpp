/*escape.c*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*�^�u�̎���*/
	printf("���i��\t�艿\n");
	printf("�L\t100\n");
	printf("��\t80\n");
	printf("\n");
	/*�o�b�N�X�y�[�X�̎���*/
	printf("�o�b�N�X�y�[�X�̎���\n");
	printf("ABC\bDEFG\n");
	printf("ABC\b\n");
	printf("\b\n");
	/*�x���̎���*/
	printf("\a");

	system("pause");
	return 0;

}