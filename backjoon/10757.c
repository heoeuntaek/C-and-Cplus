#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void append(char* dst, char c) {
	char* p = dst;
	while (*p != '\0') p++; // 문자열 끝 탐색
	*p = c;
	*(p + 1) = '\0';
}

void reverse(char arr[]) {
	int len = strlen(arr);
	for (int i = 0; i < len / 2; i++) {
		char temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}

}
int main() {

	char chaA[10001], chaB[10001];
	char sum[10003] = { 0 };
	scanf("%s %s", chaA, chaB);

	int lenA = strlen(chaA);
	int lenB = strlen(chaB);
	int len;
	if (lenA < lenB) {
		len = lenB;
	}
	else {
		len = lenA;
	}

	reverse(chaA);
	reverse(chaB);
	int num;

	int carry = 0;
	for (int i = 0; i < len; i++) {
		num = chaA[i]-'0' + chaB[i] - '0' + carry;
		if (num < 0) {
			num += '0';
		}

		if (num >= 10) {
			carry = 1;
			num -= 10;
		}
		else {
			carry = 0;
		}
		sum[i] = num + '0';
	}
	if (carry == 1) {
		sum[len] = '1';
	}
	

	reverse(sum);
	printf("%s", sum);

	return 0;
}