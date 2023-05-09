//#include <iostream>
//#include <vector>
//#include <algorithm> 
//
//using namespace std;
//
//class Point
//{
//
//public:
//
//
//	int x;
//	int y;
//
//	Point(int _x, int _y) :x(_x), y(_y) {};
//	int getX() { return x; }
//	int getY() { return y; }
//	//Point(int _x, int _y) {
//	//	x = _x;
//	//	y = _y;
//	//}
//	void print() {
//		cout << x <<" "<<y << endl;
//	}
//};
//
//
//int main()
//{
//	/*1. 공통되는 것 찾음
//		2. (각각 - 공통)을 공통에서 더함*/
//
//	Point *arr[4];
//	//arr[0], arr[1],arr[2]
//
//	for (int i = 0; i < 3; i++) {
//		int x, y;
//		cin >> x >> y;
//		arr[i] = new Point(x, y);
//	}
//	int index;
//	int x, y;
//	for (int i = 0; i < 3; i++) {
//		if (arr[i]->getX() == arr[i]->getY()) {
//			index = i;
//			x = arr[i]->getX();
//			y = arr[i]->getY();
//		}
//		
//	}
//	for (int i = 0; i < 3; i++) {
//		if (arr[i]->getX() != x) {
//			x +=arr[i]->getX() - x;
//			break;
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		if (arr[i]->getY() != y) {
//			y +=arr[i]->getY() - y;
//			break;
//		}
//	}
//
//	cout << x <<" " << y;
//	
//	
//
//
//
//
//
//	return 0;
//}
