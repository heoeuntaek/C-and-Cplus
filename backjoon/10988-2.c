//#include <stdio.h>
//#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
//#include <time.h> // time을 사용하기 위한 헤더파일
//
//int main() {
//	
//	char arr[100] = { 0 };
//	char a[100]={ 0 };
//	char b[100] = { 0 };
//	scanf("%s", arr);
//	int len = strlen(arr);
//
//
//	//길이가 홀수라면
//	if (len % 2 == 1) {
//		int tmpLen = len / 2;
//		for (int i = 0; i < tmpLen; i++) {
//			a[i] = arr[i];
//		}
//		int j = 0;
//		for (int i = len-1; i >= tmpLen+1; i--) {
//			b[j] = arr[i];
//			j++;
//		}
//	}
//	//짝수라면
//	else {
//		int tmpLen = len / 2;
//		for (int i = 0; i < tmpLen; i++) {
//			a[i] = arr[i];
//		}
//		int j = 0;
//		for (int i = len - 1; i >= tmpLen; i--) {
//			b[j] = arr[i];
//			j++;
//		}
//	}
//	if (strcmp(a, b) == 0) {
//		printf("1");
//	}
//	else printf("0");
//
//
//
//	return 0;
//}