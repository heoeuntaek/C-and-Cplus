#include <stdio.h>
int main(void) {
	int num1, num2;
	int a, b, c;
	int mul;

	scanf("%d", &num1);
	scanf("%d", &num2);
	c = num1 * (num2 / 100);
	b = num1 * (num2 % 100 /10);
	a = num1 * (num2 % 10);
	mul = num1 * num2;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", mul);
	 
	return 0;

	

}