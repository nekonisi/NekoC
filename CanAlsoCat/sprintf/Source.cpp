#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char buffer[128], name[32];
	int age;
	double height, weight;
	int endFlg=1;

	do{
		printf("����---");
		gets_s(name);
		if (!strcmp(name, "")){
			printf("���������͂���Ă��܂���B\n");
		}
	} while (!strcmp(name, ""));

	do{
		printf("�N��---");
		scanf_s("%d", &age);
		if (age < 0 || age > 150){
			printf("�N��s�K�؂ł��B\n");
		}
	} while (age < 0 || age > 150);

	do{
		printf("�g��(cm)---");
		scanf_s("%lf", &height);
		if (height < 0.0 || height > 250.0){
			printf("�g���̒l���s���ł��B\n");
		}
	} while (height < 0.0 || height > 250.0);

	do{
		printf("�̏d(kg)---");
		scanf_s("%lf", &weight);
		if (weight < 0.0 || weight > 200.0){
			printf("�̏d�̒l���s���ł��B\n");
		}
	} while (weight < 0.0 || weight > 200.0);

	sprintf_s(buffer,
		"\n%s����(�N���%d��)�̃v���t�B�[��\n"
		"�g����%5.1fcm, �̏d %5.1fkg�ŁABMI��%4.1f�ł�\n",
		name, age, weight, height, weight * 10000.0 / (height * height)
		);
	printf(buffer);

	system("pause");
	return 0;

}