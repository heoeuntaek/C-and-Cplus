#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
using namespace std;

int main()
{
	vector<int>v;
	int number = 5;
	for (int i = 0; i < number; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < number - 1; i++) {
		for (int j = i + 1; j < number; j++) {
			if (v[i] > v[j]) {
				int tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}
	//Æò±Õ
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += v[i];
	}
	int average = sum / 5;
	cout << average<<endl;

	//Áß¾Ó°ª
	for (int i = 0; i < 5; i++) {
		if (i == 2) {
			cout << v[i];
			break;
		}
	}



}
