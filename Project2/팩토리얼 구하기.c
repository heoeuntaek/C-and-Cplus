#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int factorial(int a)
{
	if (a < 1) return 1;
	else return a * factorial(a - 1);
}
int main(void) {
	int b;
	int c;
	printf("번호를 누르시오\n 1: 시작 \n 2: 종료\n");
	scanf("%d", &c);
	switch (c) {
	case 1:
		printf("입력할 값:");
		scanf("%d", &b);
		int t = factorial(b);
		printf("%d! = %d", b, t);
	case 2: break;
	}
}