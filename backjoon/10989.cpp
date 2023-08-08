#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int number;
	cin >> number;

	int count[10001] = { 0 };

	for (int i = 0; i < number; i++) {
		int a; 
		cin >> a;
		count[a]++;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < count[i]; j++) {
			cout << i << '\n';
		}

	}


}


