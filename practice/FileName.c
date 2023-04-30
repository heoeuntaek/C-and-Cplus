#include <stdio.h>


int main(void) {
	int arr[10] = { 0 };
	int arr2[10] = { 0, };

	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
		printf("%d", arr2[i]);
	}
	return 0;
}