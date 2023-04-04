#include <stdio.h>
#include <string.h>

int main() {
	int number;
	int money;
	int q = 25;
	int d = 10;
	int n = 5;
	int p = 1;

	int qNum;
	int dNum;
	int nNum;
	int pNum;

	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		qNum = 0;
		dNum = 0;
		nNum = 0;
		pNum = 0;
		scanf("%d", &money);
		//money를 ?로 나눌 수 있다면 계속 나누기
		while (q <= money) {
			money -=q;
			qNum++;
		}
		while (d <= money) {
			money -=d;
			dNum++;
		}
		while (n <= money) {
			money -=n;
			nNum++;
		}
		while (p <= money) {
			money -=p;
			pNum++;
		}
		printf("%d %d %d %d\n", qNum, dNum, nNum, pNum);

	}
	


	return 0;
}