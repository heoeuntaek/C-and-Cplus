#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
using namespace std;

int main()
{
	int number;
	cin >> number;  //567
	//�ڸ��� ���ϱ�
	int digit = 0;;
	int n = number;
	int n2 = number;

	while (n > 0) {
		n = n / 10;
		digit++;
	}
	//�����ڸ�, ��, ���� �ڸ� ���ϱ�
	
	int min = 1000000;
	
	for (int i = number; i > 1; i--) {
		int num = i;
		int sum = i;
		vector<int>v;
		for (int j = 0; j < digit; j++) {
			int tem = (int)(num % 10);
			v.push_back(tem);
			num = num / 10;
		}
		sum += accumulate(v.begin(), v.end(), 0);
		if (sum == number) {
			if (i < min) {
				min = i;

			}
		}
	}
	if (min == 1000000) {
		cout << 0;
	}
	else {
		cout << min;
	}




}
