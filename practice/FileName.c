#include <stdio.h>


int main(void) {
	char* str1[2] = { "ab", "bc" };
	char str2[3] = { 0,};
	str2[0] = 'a';
	str2[1] = 'b';
	
	char a = str1[0][0];
	char b = str2[0];
	printf("´ä = %d", strcmp(a+"", b+""));


	/*char tmp = 'a';
	for (int i = 0; i < 2; i++) {
		str2[i] = tmp;
		tmp++;
	}*/
	return 0;
}