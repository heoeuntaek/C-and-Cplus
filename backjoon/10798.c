#include <stdio.h>
#include <stdlib.h> //srand, rand�� ����ϱ� ���� �������
#include <time.h> // time�� ����ϱ� ���� �������


int main(void) {
	char arr[5][15] = { 0 };
	for (int i = 0; i < 5; i++) {
		scanf("%s", arr[i]);

	}

	
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}*/

	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (arr[i][j] == NULL) {
				continue;
			}
			else{
				printf("%c", arr[i][j]);
			}
			
		}

	}



	return 0;
}