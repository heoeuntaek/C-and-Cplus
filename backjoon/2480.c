//#include <stdio.h>
//#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
//#include <time.h> // time을 사용하기 위한 헤더파일
//
//int main() {
//	int arr[3];
//
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//
//
//	int count = 0;
//	int target;
//	int sum = 0;
//
//	for (int i = 0; i < 3; i++) {
//
//		for (int j = 0; j < 3; j++) {
//			if (i == j) {
//				continue;
//			}
//			else {
//				if (arr[i] == arr[j]) {
//					count++;
//					target = arr[i];
//				}
//			}
//
//		}
//	}
//	int max = -1;
//	for (int i = 0; i < 3; i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	 
//	if (count == 6) {
//		sum = 10000 + target * 1000;
//	}
//	else if (count == 2) {
//		sum = 1000 + target * 100;
//	}
//	else if (count == 0) {
//		sum = max * 100;
//	}
//
//		
//	printf("%d", sum);
//
//
//
//
//
//
//	return 0;
//}