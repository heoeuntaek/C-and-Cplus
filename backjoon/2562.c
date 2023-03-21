#include <stdio.h>

int main() {
	int max, index=-1;
	int arr[9];
	
	for (int i = 1; i<10; i++) {
		scanf("%d\n", &arr[i]);
	}
	max = arr[0];
	for (int i = 1; i<10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}

	printf("%d\n", max);
	printf("%d\n", index);

	return 0;
}