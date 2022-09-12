#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a;
	int sum = 1;
	int i;
	scanf("%d", &a);
	for (int i = a; i > 1; i--)
	{
		sum = sum * i;
	}
	printf("%d", sum);
}