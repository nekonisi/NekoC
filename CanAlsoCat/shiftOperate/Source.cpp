#include <stdio.h>
#include <stdlib.h>

int main()
{
	short _short1 = 10;
	short _short2 = -50;

	printf("_short1      = %d\n", _short1);
	printf("_short1 >> 2 = %d\n", _short1 >> 2);
	printf("_short1 << 2 = %d\n", _short1 << 2);

	printf("-----------------------------------\n");

	printf("_short2      = %d\n", _short2);
	/* ���V�t�g�����ꍇ�͉��ʃr�b�g��0�������Ă���B*/
	printf("_short2 >> 1 = %d\n", _short2 >> 1);
	/* �E�V�t�g�����ꍇ�͏�ʃr�b�g�ɕ����r�b�g�Ɠ����r�b�g�������Ă���B*/
	printf("_short2 << 1 = %d\n", _short2 << 1);

	system("pause");

	return 0;

}
