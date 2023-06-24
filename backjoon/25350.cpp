#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
using namespace std;

int main()
{

	int number;
	int prize;
	cin >> number >> prize;
	vector<int> v;
	for (int i = 0; i < number; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	//선택정렬
	for (int i = 0; i < number - 1; i++) {
		for (int j = i+1; j < number; j++) {
			if (v[i] < v[j]) {
				int tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;

			}
			


		}
	}
	if (prize == number) {
		cout << v[number - 1];
	}
	else {
		cout << v[prize - 1];
	}
}


