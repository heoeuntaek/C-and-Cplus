#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
	int i, j;
	printf("피라미드를 몇 층 까지 쌓으시겠습니까?");
	int a;
	scanf("%d", &a);

	for (i = 1; i <= a; i++)  //줄바꿈
	{
		for (int k = 1; k <= (a - i); k++) // 앞 공백
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++) // 피라미드
			printf("*");
		printf("\n");
	}
}