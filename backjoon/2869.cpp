//#include <iostream>
//#include <vector>
//#include <algorithm> 
//#include <string>
//#include <numeric>
//#include <cmath>
//#include <sstream>
//#include <tuple>
//
//using namespace std;
//
//
//int main()
//{
//	
//	int a, b, v;
//	cin >> a >> b >> v;
//	int day = 0;
//
//	day = ceil((double)v / ((double)(a - b)));
//	int now = day * (a - b);
//	/*int pre = now + 2 * b - 2*a;
//	while (pre+a >= v) {
//		pre = pre + 2 * b - 2*a;
//		day--;
//
//	}*/
//
//	//°Å²Ù·Î
//	while (1) {
//		if (now + 2 * b - a < v) {
//			cout << day;
//			return 0;
//		}
//		now += b;
//		if (now <= v) {
//			cout << day;
//			return 0;
//		}
//
//		now = now - a;
//		day--;
//
//
//	}
//
//
//	cout << day;
//
//	return 0;
//
//}
//
//
