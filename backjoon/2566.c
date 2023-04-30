//#include <stdio.h>
//#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
//#include <time.h> // time을 사용하기 위한 헤더파일
//
//
//int main(void) {
//	int arr[9][9] = { 0, };
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//
//	}
//	int a = 0;
//	int b = 0;
//	int max = -1;
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			if (arr[i][j] > max) {
//				max = arr[i][j];
//				a = i + 1;
//				b = j + 1;
//			}
//		}
//	}
//
//	printf("%d \n%d %d", max,a,b);
//	
//
//	return 0;
//}