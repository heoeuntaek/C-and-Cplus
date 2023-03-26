//#include <stdio.h>
//
//
//int main() {
//	int arr[100];
//	int arropp[100];
//	int n, m;
//	int i, j;
//	scanf("%d %d", &n, &m);
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//
//	for (int z = 0; z < m; z++) {
//		scanf("%d %d", &i, &j);
//		i--; j--;
//		int b = j - i + 1;
//
//		for (int a = 0; a < b; a++) {
//
//			arropp[a] = arr[j];
//			j--;
//		}
//		for (int a = 0; a < b; a++) {
//
//			arr[i] = arropp[a];
//			i++;
//		}
//
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}