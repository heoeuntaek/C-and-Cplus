#include <iostream>
#include <vector>
#include <algorithm> 
#include<string>
#include <numeric>
using namespace std;

int main()
{
	int number;
	int maxNumber;
	cin >> number >> maxNumber;
	vector<int>v;
	for (int i = 0; i < number; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}


	int i = 0;
	int j = 1;
	int k = 2;
	int sum = 0;
	int answer = 0;

	int iTem;
	int jTem;
	int kTem;


	int max = 0;
	while (i<v.size()-3) {

		
		if (k == v.size()-1) {
			if (j == v.size() - 2) {
				i++;
				j =i + 1;
				k = j + 1;
			}
			else{
				j++;
				k = j + 1;
			}
			
		}
		else{
			k++;
		}
		
		sum = v[i] + v[j] + v[k];

		if (sum <= maxNumber) {
			if (max < sum) {
				max = sum;
				iTem = i;
				jTem = j;
				kTem = k;

			}
		}
	}
	answer = v[iTem] + v[jTem] + v[kTem];
	cout << answer;


}
