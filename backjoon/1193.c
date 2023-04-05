#include <stdio.h>
#include <string.h>

int main() {
	int x;
	scanf("%d", &x);
	int flip = 0;
	int cnt = 0;
	int a, b;
	for (int i = 1; i < 10000000; i++) {

		flip++;
		if ((flip % 2) == 0) {//Â¦¼ö¶ó¸é
			for (int j = 1; j <= i; j++) {
				cnt++;
				if (cnt == x)
				{
					a = j;
					b = i + 1 - j;
					printf("%d/%d", a, b);
					return 0;
				}
			}

		}
		else if ((flip % 2) == 1) {//È¦¼ö¶ó¸é
			for (int j = i; j > 0; j--) {
				cnt++;
				if (cnt == x)
				{
					a = j;
					b = i + 1 - j;
					printf("%d/%d", a, b);
					return 0;
				}
			}


		}

		


	}


	return 0;
}