//#include <stdio.h>
//#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
//#include <time.h> // time을 사용하기 위한 헤더파일
//
//
//int main(void) {
//	int number;
//	scanf("%d", &number);
//	int arr[100][100] = { 0 };
//	int area = 0; //넓이
//	for (int i = 0; i < number; i++) {
//		int x, y;
//		scanf("%d %d", &x, &y);
//		for (int a = x; a < x + 10; a++) {
//			for (int b = y; b < y + 10; b++) {
//				arr[a][b]++;
//			}
//		}
//
//	}
//	int cnt = 0;
//	for (int i = 0; i < 100; i++) {
//		for (int j = 0; j < 100; j++) {
//			if (arr[i][j]) {
//				cnt++;
//			}
//		}
//	}
//	
//	printf("%d", cnt);
//
//
//	return 0;
//}