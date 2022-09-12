#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void hanoi(int a, char from, char tmp, char to) {

	if (a == 1) printf("1의 원반을 %c에서 %c로 이동\n", from, to);
	else {
		hanoi(a - 1, from, to, tmp);
		printf("%d의 원반을 %c에서 %c로 이동\n", a, from, to);
		hanoi(a - 1, tmp, from, to);
		int c = 0;
		c = c + 1;
		return c;
	}
}

	int main(void) {
		hanoi(4, 'a', 'b', 'c');
		int c = 0; 
		printf("%d", c);
		
	}
	
	
	