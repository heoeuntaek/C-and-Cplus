//#include <stdio.h>
//
//
//int main(void) {
//
//
//	char* a = "ab";
//	char b[2] = { 0, };
//	char c = 'a';
//
//	for (int i = 0; i < 2; i++) {
//		b[i] = c;
//		c++;
//	}
//
//
//	printf("사이즈= %d\n", strlen(b));
//	char* d = "ab";
//	printf("사이즈= %d\n", strlen(d));
//	char e[2] = { 0, };
//	for (int i = 0; i < 2; i++) {
//		e[i] = b[i];
//	}
//
//	printf("답 = %d", strcmp(e, a));
//	for (int i = 0; i < strlen(e); i++) {
//		printf("이것은 = %c\n", e[i]);
//	}
//	
//
//	return 0;
//}