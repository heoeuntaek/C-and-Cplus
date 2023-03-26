#include <stdio.h>

int sum(int n) {
	if (n == 0)return 0;
	else return n + sum(n - 1);
}

int main() {
	int n;
	printf("n을 입력하시오: ");
	scanf("%d", &n);
	printf("합계: %d\n", sum(n));
	return 0;
}