#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int arr[6] = {1,1,2,2,2,8};
	int arrayLength = sizeof(arr) / sizeof(int);
	for (int i = 0; i < arrayLength; i++) {
		int a;
		scanf("%d",&a);
		arr[i] = arr[i] - a;
	}

	for (int i = 0; i < arrayLength; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}