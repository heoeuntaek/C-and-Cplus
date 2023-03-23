#include <stdio.h>

int main() {
	int arr[31];
	int input;
	for (int i = 1; i <= 30; i++) {
		{arr[i] = -1; }
	}

	for (int i = 1; i <= 28; i++) {
		scanf("%d", &input);
		arr[input] = 1;
	}

	int a = -1, b = -1;

	for (int i = 1; i <= 30; i++) {
		if (arr[i] == -1) {
			if (a == -1) { a = i; }
			else if (a != -1) {
				b = i;
			}
		}
	}

	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	printf("%d\n%d", a, b);


	return 0;
}