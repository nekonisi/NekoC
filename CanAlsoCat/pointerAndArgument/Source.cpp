#include <stdio.h>
#include <stdlib.h>

void swap(int, int);
void swap_pointer(int*, int*);

int main(){

	int _int1, _int2;
	_int1 = 10;
	_int2 = 20;

	/* _int1 と _int2 を入れ替えたい*/
	printf("元 \n");
	printf("_int1 = %d, _int2 = %d \n", _int1, _int2);

	printf("----------------------------------------\n");

	swap(_int1, _int2);
	printf("swapを利用 \n");
	printf("_int1 = %d, _int2 = %d \n", _int1, _int2);

	printf("----------------------------------------\n");

	swap_pointer(&_int1, &_int2);
	printf("swap_pointerを利用 \n");
	printf("_int1 = %d, _int2 = %d \n", _int1, _int2);

	system("pause");
	return 0;
}

void swap(int value1, int value2){
	int temp;
	temp = value1;
	value1 = value2;
	value2 = temp;
	return;
}

void swap_pointer(int* value1, int* value2){
	int temp;
	temp = *value1;
	*value1 = *value2;
	*value2 = temp;
	return;
}