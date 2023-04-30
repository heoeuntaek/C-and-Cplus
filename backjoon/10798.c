#include <stdio.h>
#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
#include <time.h> // time을 사용하기 위한 헤더파일


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