#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>

using namespace std;
dd
int main()
{
	//ù° �ٿ� x, y, w, h�� �־�����.
	int x, y, x2, y2;
	cin >> x >> y >> x2 >> y2;

	int result = min(min(x2 - x, y2 - y),min(x,y));
	cout << result;


	return 0;
}
