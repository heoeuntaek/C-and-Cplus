//#include <stdio.h>
//
//int main() {
//	int m, n;
//	int i, j, k;
//	scanf("%d %d", &n, &m);
//	int tmp;
//
//	int arr[100];
//	// 바구니 = m 
//	// 횟수 = M
//	// i~j  k= 공번호
//
//	for (int x = 1; x <= n; x++) {
//		arr[x] = x;
//	}
//
//	for (int x = 0; x < m; x++) {
//		scanf("%d %d", &i, &j);
//		tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//
//
//		
//	}
//
//	for (int x = 1; x <= n; x++) {
//		printf("%d ", arr[x]);
//	}
//
//
//
//	return 0;
//}