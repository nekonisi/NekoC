/*upgradeAndDowngrade.c*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a=10, b=3;
	double c;
	int d1=10;
	double d2=2.35;

	// 10/3=0.3333...
	c = a / b;

	// �o�͌���: 3.0000
	printf("int���m�̌v�Z���ƌ��ʂ�int�ɂȂ�B\n");
	printf("%d �� %d = %f\n", a, b, c);

	// �o�͌���: 12.350000
	printf("�قȂ�^�Ōv�Z���s�����́A�傫���^�ɍ��킹����B*�i�グ*\n");
	printf("%d + %f = %f\n", d1, d2, d1 + d2);

	system("pause");
	return 0;
}