#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[3][2] = {10,20,30,40,50,60};
	int outer, inner;
	
	/************
	�i�[�̂����
	[10]	[20]
	[30]	[40]
	[50]	[60]
	************/

	printf("\n�e�v�f�̒l\n");
	for (outer = 0; outer < 3; outer++){
		for (inner = 0; inner < 2; inner++){
			printf("\tarray[%d][%d] = %d",
				outer,inner,array[outer][inner]);
		}
	printf("\n");
	}

	printf("\n�e�v�f�̃A�h���X���m���߂�\n");
	for (outer = 0; outer < 3; outer++){
		for (inner = 0; inner < 2; inner++){
			printf("\t&array[%d][%d] = %p\t(array[%d] + %d) = %p\t"
				, outer, inner, &array[outer][inner], outer, inner, (array[outer] + inner));
		}
	printf("\n");
	}

	printf("\narray[m][n]�� *(*(a + m) + n)�Ə�����̂��m���߂�B\n");
	for (outer = 0; outer < 3; outer++){
		for (inner = 0; inner < 2; inner++){
			printf("\t*(*(array + %d) + %d) = %d\n"
				, outer, inner, *(*(array + outer) + inner));
		}
	}

	system("pause");
	return 0;

}