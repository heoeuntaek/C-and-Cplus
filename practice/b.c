#include <stdio.h>


int main(void) {
	char a = 'A';
	if (a >= 'A') {
		a = a - 'A' + 'a';
	}

	printf("%c", a);

	return 0;
}