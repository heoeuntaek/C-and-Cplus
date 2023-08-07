#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
using namespace std;

int main()
{
	int number;
	int a;

	vector<int> v;
	cin >> number;
	for (int i = 0; i < number; i++) {


		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < number; i++)
		cout << v[i] << '\n';
}


