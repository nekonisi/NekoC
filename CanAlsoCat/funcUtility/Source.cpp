#include <stdio.h>
#include <stdlib.h>

/*�v���g�^�C�v�錾*/
int addStatic(int addValue);
int add(int addValue);
void showValue(int showValue);

int main()
{
	int repeatCount = 0;
	printf("���I�ȕϐ��̏ꍇ\n");
	for (repeatCount = 0; repeatCount < 4; repeatCount++){
	showValue(add(repeatCount));
	}

	printf("�ÓI�ȕϐ��̏ꍇ\n");
	for (repeatCount = 0; repeatCount < 4; repeatCount++){
	showValue(addStatic(repeatCount));
	}

	system("pause");
	return 0;
}

int add(int addValue)
{
	 int sum=0;
	sum += addValue;
	return sum;
}

int addStatic(int addValue)
{
	static int sum;
	sum += addValue;
	return sum;
}

void showValue(int showValue)
{
	printf("�l��%d\n", showValue);
}