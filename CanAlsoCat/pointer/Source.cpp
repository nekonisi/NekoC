#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* �I�[�͂����܂����捇�}*/
	char charArray[6] = { 'a', 'b', 'c','d','e','\0'};
	int intArray[6] = {1,2,3,4,5,6};

	char* pCharArray = NULL;
	int* pIntArray = NULL;

	/* �|�C���^�ɔz��擪�A�h���X�����蓖�Ă�*/
	pCharArray = &charArray[0];
	pIntArray = &intArray[0];

	/* ���L�R�[�h��L���ɂ���ƃo�b�t�@�I�[�o�[��������*/
	//char charArray[6] = { 'a', 'b', 'c','d','e','f'};

	printf("%s\n", charArray);

	/* �|�C���^���ЂƂ̗̈�Ƃ��ăA�N�Z�X(char�^�ŃA�N�Z�X)*/
	int i = 0;
	for (i = 0; i < 6; i++){
		printf("%c", *(pCharArray+i));
	}
	printf("\n");

	/* �|�C���^�̗̈��S�̂��A�N�Z�X(������Ƃ��ăA�N�Z�X)*/
	char _char;
	int _size = sizeof(pCharArray)/sizeof(pCharArray[0]);
	printf("%s\n", pCharArray);
	printf("CharArray�̃T�C�Y: %d\n", _size);

	/* %s�͕�����̂��߃G���[�ɂȂ�B*/
	//printf("%s\n", *pCharArray);
	printf("%d\n", *(pIntArray));
	printf("%d\n", *(pIntArray+1));
	printf("%x\n", pIntArray);
	system("pause");
	return 0;

}