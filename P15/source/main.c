#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE* fptr1, * fptr2;
	char ch;

	fptr1 = fopen("C:/c_code/HW7/welcome.txt", "r");
	fptr2 = fopen("C:/c_code/HW7/output.txt", "w");

	if ((fptr1 != NULL) && (fptr2 != NULL)) {

		while ((ch = getc(fptr1)) != EOF) {
			putc(ch, fptr2);
		}

		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׽ƻs����!!\n");
	}
	else{
		printf("�ɮ׶}�ҥ���");
	}

	system("pause");
	return 0;
}