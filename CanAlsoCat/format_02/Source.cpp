/*format2.c*/

#include <stdio.h>
#include <float.h>
#include <stdlib.h>

int main(){

	double pai = 3.14159265358979;
	int mon = 2;
	float flt = 1.2f;

	/*���������_*/
	printf("%5.2hf\n", flt);
	printf("%-5.2hf\n", flt);
	printf("%05.2hf\n", flt);
	printf("%+08.2hf\n", flt);
	printf("%-08.2f\n", flt);

	/*����*/
	printf("%d\n", mon = 3);
	printf("%05d\n", mon);

	/*�~����*/
	printf("%e\n", pai);
	printf("%08.2f\n", pai);
	printf("�~������%f�ł�\n", pai);
	printf("�~������%1f�ł�\n", pai);
	printf("���������ڂ����l��%10.81f�ł�\n", pai);
	printf("���������ڂ����l��%15.131f�ł�\n", pai);
	printf("���������ڂ����l��%20.18f�ł�\n", pai);
	printf("�~������%010.2f\n", pai);
	printf("�~������%-10.2f\n", pai);
	printf("�~������%10.2f\n", pai);
	system("pause");

	return 0;
}
