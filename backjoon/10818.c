#include <stdio.h>

int main(void) {
	int n, input;
	scanf("%d", &n);

	int max = -1,
		min = 10000;
	int arr[100];

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

	}
	max = arr[0];
	min = arr[0];

	for (int i = 0; i < n; i++) {


		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("%d %d", min, max);

	return 0;
}