#include <stdio.h>
#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
#include <time.h> // time을 사용하기 위한 헤더파일

int main() {

	char str[1000000];
	scanf("%s", str);
	/*strlwr(str);*/

	
	int alphaIndex[27] = { 0, };
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if ((str[i] >= 'A') && (str[i] <= 'Z')) {
			str[i] = str[i] - 'A' + 'a';
		}
		int index = str[i] - 'a';
		alphaIndex[index]++;
	}

	int max = alphaIndex[0];
	int maxIndex=0;
	for (int i = 0; i < 27; i++) {
		if (max < alphaIndex[i]) {
			max = alphaIndex[i];
			maxIndex = i;
		}

	}
	int result = 0;
	for (int i = 0; i < 27; i++) {
		if (max == alphaIndex[i]) {
			result++;
		}
	}
	if (result>1) {
		printf("?");
	}
	else {
		printf("%c", maxIndex + 'A');
	}


	return 0;


}