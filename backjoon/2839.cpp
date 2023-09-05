#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	if (n == 1 or n == 2 or n == 4 or n == 7) {
		cout << -1;
		return 0;
	}
	while (n>0) {

		n -= 5;
		count++;
		if (n == 1 or n == 2 or n == 4 or n == 7 or n<0) {
			n += 5;
			n -= 3;
		}
	}
	cout<<count;


	return 0;



}
