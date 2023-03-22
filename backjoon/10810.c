#include <stdio.h>

int main() {
	int m, n;
	int i, j, k;
	scanf("%d %d", &n, &m);
	//int* arr = malloc(n * sizeof(int));
	int arr[100];
	// 바구니 = m 
	// 횟수 = M
	// i~j  k= 공번호

	for (int x = 0; x < n; x++) {
		arr[x] = 0;
	}

	for (int x = 0; x < m; x++) {
		scanf("%d %d %d", &i, &j, &k);


		for (int z = i-1; z <= j-1; z++) {
			arr[z] = k;
		}
	}

	for (int x = 0; x < n; x++) {
		printf("%d ", arr[x]);
	}



	return 0;
}