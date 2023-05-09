//#include <iostream>
//#include <vector>
//#include <algorithm> 
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int xmin = 10001;
//	int ymin = 10001;
//	int xmax = -10000;
//	int ymax = -10000;
//	for (int i = 0; i < n; i++) {
//		int x, y;
//		cin >> x >> y;
//		if (xmin > x) {
//			xmin = x;
//		}
//		if (xmax < x) {
//			xmax = x;
//		}
//		if (ymin > y) {
//			ymin = y;
//		}
//		if (ymax < y) {
//			ymax = y;
//		}
//	}
//	int xAns = xmax - xmin;
//	int yAns = ymax - ymin;
//	cout << xAns * yAns;
//
//	return 0;
//}
