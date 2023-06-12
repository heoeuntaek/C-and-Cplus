#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
using namespace std;

int main()
{
	int input;
	cin >> input;
	int number = 666;
	int i = 1;
	vector<int>v;
	while (input > i) {
		number++;
		string numStr = to_string(number);

		if (numStr.find("666") > numStr.size())
		{
			continue;
		}
		i++;


	}
	cout << number;



}
