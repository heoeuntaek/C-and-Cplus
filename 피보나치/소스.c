#include<stdio.h>

int main(void) {
	int sum = 0;
	int a = 1;
	int b = 2;
	int c = 0;
	for (int i = 0; i <= 55; i++) {
		int c = a + b;
		printf("%d ", c);

		a = b;
		b = c;
	}
}



