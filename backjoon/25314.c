#include <stdio.h>
#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
#include <time.h> // time을 사용하기 위한 헤더파일

int main() {
	int n;
	int time;
	scanf("%d", &n);
	time = n / 4;
	for (int i = 0; i < time; i++) {
		printf("long ");
	}
	printf("int");

	








	return 0;
}