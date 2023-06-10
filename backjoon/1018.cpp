#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
using namespace std;

int main()
{

	string WB[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
	};
	string BW[8] = {
			"BWBWBWBW",
			"WBWBWBWB",
			"BWBWBWBW",
			"WBWBWBWB",
			"BWBWBWBW",
			"WBWBWBWB",
			"BWBWBWBW",
			"WBWBWBWB"
	};

	int m, n;
	cin >> m >> n;
	vector<string>arr;
	for (int i = 0; i < m; i++) {
		string a;
		cin >> a;
		arr.push_back(a);
	}


	//copy(arr.begin(), arr.end(), arr2.begin());

	int count;
	vector<int>v;

	for (int a = 0; a <= m - 8; a++) {
		for (int b = 0; b <= n - 8; b++) {
	vector<string>arr2 = arr;
	/*int a = 0;
	int b = 0;*/
	count = 0;
	int c = 0;
	for (int i = a; i < a + 8; i++) {
		int d = 0;
		for (int j = b; j < b + 8; j++) {
		
			if (arr2[i][j] != WB[c][d]) {
				arr2[i][j] = WB[c][d];
				count++;
			}
			d++;
		}c++;
	}
	v.push_back(count);
	count = 0;
	vector<string>arr3 = arr;
	c = 0;
	for (int i = a; i < a + 8; i++) {
		int d = 0;
		for (int j = b; j < b + 8; j++) {
			if (arr3[i][j] != BW[c][d]) {
				arr3[i][j] = BW[c][d];
				count++;
			}
			d++;
		}c++;
	}
	v.push_back(count);
		}
	}
	
	int min = *min_element(v.begin(), v.end());
	cout << min;


}
