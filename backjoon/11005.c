//#include <stdio.h>
//#include <string.h>
//
//int main() {	
//
//	int n;   //자연수 10
//	int b; //진법  2
//
//	char arr[35] = {0};
//	int rest; //나머지
//	int share; // 몫
//	scanf("%d %d", &n, &b);
//	
//	share = n;
//	int i = 0;
//	while (share != 0) {
//		rest = share % b;
//		share = share / b;
//		if (rest > 9) {
//			arr[i] = rest + 55;	
//			
//		}
//		else {
//			arr[i] = rest + 48;
//			// rest(정수)를 문자로
//		}
//		i++;
//	}
//	
//	for (int i = 0; i < strlen(arr)/2; i++) {
//		char tmp = arr[i];
//		arr[i] = arr[strlen(arr) - i-1];
//		arr[strlen(arr) - i-1] = tmp;
//
//	}
//	for (int i = 0; i < strlen(arr); i++) {
//		printf("%c", arr[i]);
//	}
//	
//
//	return 0;
//}