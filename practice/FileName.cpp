#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
using namespace std;
int main() {
	int number;
	vector<int>v;

	number = 216;
	for (int i = 0; i < 3; i++) {
		v.push_back((int)(number % 10));
		number = number / 10;
	}
	for (auto loop : v)
	{
		cout << loop;
	}
}