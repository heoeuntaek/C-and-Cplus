//#include <stdio.h>
//#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
//#include <time.h> // time을 사용하기 위한 헤더파일
//
//int main() {
//	int number;
//	scanf("%d", &number);
//
//	int sum = 0;
//	
//	for (int i = 0; i < number; i++) {
//		int answer = 0;
//		int arrAlpha[26] = { 0, };
//		char arr[100];
//		scanf("%s", arr);
//		char prev;
//		for (int j = 0; j < strlen(arr); j++) {
//			char alpha = arr[j];
//			alpha = alpha - 'a';
//			if (j != 0) {
//				if (arr[j] == arr[j-1]) {
//					continue;
//				}
//				else {
//					//배열의 이전 항목과 다르다면
//
//					if (arrAlpha[alpha] == -1) {
//						answer = 0;
//						break;
//					}
//					
//					arrAlpha[prev] = -1; //닫힘
//				}
//			}
//			if (arrAlpha[alpha] == 0) {
//				arrAlpha[alpha] = 1;  // 있음
//				answer++;
//			}
//			prev = alpha;
//		
//		}
//		if (answer > 0) {
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	
//
//	return 0;
//
//
//}