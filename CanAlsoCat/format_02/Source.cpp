/*format2.c*/

#include <stdio.h>
#include <float.h>
#include <stdlib.h>

int main(){

	double pai = 3.14159265358979;
	int mon = 2;
	float flt = 1.2f;

	/*浮動小数点*/
	printf("%5.2hf\n", flt);
	printf("%-5.2hf\n", flt);
	printf("%05.2hf\n", flt);
	printf("%+08.2hf\n", flt);
	printf("%-08.2f\n", flt);

	/*整数*/
	printf("%d\n", mon = 3);
	printf("%05d\n", mon);

	/*円周率*/
	printf("%e\n", pai);
	printf("%08.2f\n", pai);
	printf("円周率は%fです\n", pai);
	printf("円周率は%1fです\n", pai);
	printf("もう少し詳しい値は%10.81fです\n", pai);
	printf("もう少し詳しい値は%15.131fです\n", pai);
	printf("もう少し詳しい値は%20.18fです\n", pai);
	printf("円周率は%010.2f\n", pai);
	printf("円周率は%-10.2f\n", pai);
	printf("円周率は%10.2f\n", pai);
	system("pause");

	return 0;
}
