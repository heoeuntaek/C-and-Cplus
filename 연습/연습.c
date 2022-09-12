#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_DEGREE 1013
#define MAX(a,b) (((a)>(b))?(a):(b))

typedef struct {
	int degree;
	int coef[MAX_DEGREE];
}poly;

poly poly_add(poly a, poly b) {
	poly c;
	int degree_A = a.degree; //최고차항
	int degree_B = b.degree;
	c.degree = MAX(a.degree, b.degree);	//최고차항

	int apos = 0; int bpos = 0; int cpos = 0;
	while (apos <= a.degree && bpos <= b.degree) {
		if (degree_A > degree_B)
		{
			c.coef[cpos++] = a.coef[apos++];
			degree_A--;
		}
		else if (degree_A == degree_B)
		{
			c.coef[cpos++] = a.coef[apos++] + b.coef[bpos++];

			degree_A--; degree_B--;
		}
		else
		{
			c.coef[cpos++] = b.coef[bpos++];

			degree_B--;
		}
	}return c;
}

main() {
	poly a = { 5, {3,6,0,0,0,10 } };
	poly b = { 4, {7,0,5,0,1} };
	poly c;
	c = poly_add(a, b);
	printf("%d차항", c.degree);
	for (int i = 0; i <= 5; i++) {
		printf("%d,", c.coef[i]);
	}
}