#include <stdio.h>
#include <stdlib.h> //srand, rand�� ����ϱ� ���� �������
#include <time.h> // time�� ����ϱ� ���� �������

int main() {

	char arr[100];
	scanf("%s", arr);
	int len = strlen(arr);
	int j = len - 1;

	int answer = 1;
	for (int i = 0; i < len / 2; i++) {
		if (arr[i] == arr[j--]) {
			continue;
		}
		answer = 0;

	}

	printf("%d", answer);




	return 0;
}