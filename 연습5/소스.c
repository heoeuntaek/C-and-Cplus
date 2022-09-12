#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int getemptyposition();
int convertx(int k);
int converty(int z);

int main() {
	srand(time(NULL));

	char ani[4][5];
	char* str[10] = { -1 };
	*str[0] = "È£¶ûÀÌ";
	*str[1] = "³«Å¸";
	*str[2] = "»çÀÚ";
	*str[3] = "ºÎ¾ûÀÌ";
	*str[4] = "¿ø¼şÀÌ";
	*str[5] = "¿À¸®";
	*str[6] = "´ß";
	*str[8] = "°³";
	*str[9] = "¾Ş¹«»õ";

	int select = -1;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getemptyposition();
			int x = convertx(pos);
			int y = converty(pos);
			ani[x][y] = str[i];
		}
	}
}

int getemptyposition()
{
	for (int k = 0; k <= 20; k++)
	{
		int ran[] = { -1 };
		if (ran[k] != -1)
		{
			ran[k] = rand() % 20;
		}
	}
}
int convertx(int k) {
	return k / 5;
}
int converty(int z)
{
	return z % 5;
}