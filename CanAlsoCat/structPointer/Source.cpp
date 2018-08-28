#include <stdio.h>
#include <stdlib.h>

struct Data{
	char name[32];
	int age;
	double height;
	double weight;
	double bmi;
};

int struct_input(struct Data *);

int main(){
	struct Data MyData;
	char format[] = "%s����(%d��)�̃v���t�B�[��\n"
		"�g�� = %5.1fcm\t�̏d = %5.1fkg\tBMI = %4.1f\n";
	char buffer[256];

	struct_input(&MyData);
	/*sprintf_s: �����ɂ̂��Ƃ��ĕϊ������o�͂𕶎���Ɋi�[����*/
	sprintf_s(buffer, format, MyData.name, MyData.age,
		MyData.height, MyData.weight, MyData.bmi);
	printf(buffer);

	/*�|�C���^�ɂ��Q��*/
	struct Data *dataPointer = &MyData;
	printf("\n\n**** �|�C���^�ɂ��Q�� *****\n");
	printf("name: %s\n", (*dataPointer).name);
	printf("age: %d\n", (*dataPointer).age);
	printf("height: %4.1f\n", (*dataPointer).height);
	printf("weight: %4.1f\n", (*dataPointer).weight);
	system("pause");
	return 0;
}

int struct_input(struct Data *p){
	printf("����---");
	gets_s(p->name);
	printf("�N��---");
	scanf_s("%d", &p->age);
	printf("�g��(cm)---");
	scanf_s("%lf", &p->height);
	printf("�̏d(kg)---");
	scanf_s("%lf", &p->weight);
	p->bmi = p->weight * 10000.0 / (p->height * p->height);

	return 0;
}