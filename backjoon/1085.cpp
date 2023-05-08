#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>

using namespace std;
dd
int main()
{
	//첫째 줄에 x, y, w, h가 주어진다.
	int x, y, x2, y2;
	cin >> x >> y >> x2 >> y2;

	int result = min(min(x2 - x, y2 - y),min(x,y));
	cout << result;


	return 0;
}
