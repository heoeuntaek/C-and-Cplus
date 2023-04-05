#include <stdio.h>
#include <string.h>

int main() {
	int n;
	int answer=0;
	scanf("%d", &n);
	while (n >= 6 * answer + 1) {
		answer++;

	}
	printf("%d", answer);


	return 0;
}