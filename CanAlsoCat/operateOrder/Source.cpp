/*operatorOrder.cpp*/

# include <stdio.h>
# include <stdlib.h>

int main()
{
	double height = 1.76, weight = 62.0;

	printf("BMI�͑̏d(kg)��g��(m)��2������������̂ł���\n");
	printf("���ꂪ25�𒴂���Ɣ얞�ł�\n");
	printf("�Ⴆ�΁A�g��%4.2fm�ő̏d%4.2fkg�̐l�ł�\n",height,weight);
	printf("%4.2f �� (%4.2f �~ %4.2f) �Ōv�Z���܂��B\n",weight,height,height);
	printf("���ʂ�%4.2f �ł����B\n", weight / (height * height));
	system("pause");

	return 0;
}