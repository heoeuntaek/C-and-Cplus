#include <stdio.h>

int sum(int n) {
	if (n == 0)return 0;
	else return n + sum(n - 1);
}

int main() {
	int n;
	printf("n�� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("�հ�: %d\n", sum(n));
	return 0;
}