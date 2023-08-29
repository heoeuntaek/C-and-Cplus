#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
#include <cmath>
#include <sstream>
#include <tuple>

using namespace std;

class Point
{

public:


	int x;
	int y;

	Point(int _x, int _y) :x(_x), y(_y) {};
	int getX() { return x; }
	int getY() { return y; }
	//Point(int _x, int _y) {
	//	x = _x;
	//	y = _y;
	//}
	void print() {
		cout << x << " " << y << endl;
	}
};


int main()
{
	/*1. 공통되는 것 찾음
		2. (각각 - 공통)을 공통에서 더함*/

	Point* arr[4];
	//arr[0], arr[1],arr[2], arr[3]

	for (int i = 0; i < 3; i++) {
		int x, y;
		cin >> x >> y;
		arr[i] = new Point(x, y);
	}
	int max, next;
	vector<int>v;

	for (int i = 0; i < 3; i++) {
		v.push_back(arr[i]->getX());
		v.push_back(arr[i]->getY());
	}
	sort(v.begin(), v.end());

	int a, b;
	for (auto i : v) {
		a = i;
		if (a == i) {
			b = i;
		}
	}

	for (int i = 0; i < 3; i++) {
		int x = arr[i]->getX();
		int y = arr[i]->getY();
		if (x == a or x == b) {
			if (y == a or y == b) {

			}
		}
	}



	return 0;
}
