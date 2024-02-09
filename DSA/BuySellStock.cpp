#include"header.h"
#include<map>

using namespace std;

#ifdef BuySellStock

void solve(int* arr, int n) {
	int minValue = arr[0], maxProfit = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] - minValue > maxProfit) {
			maxProfit = arr[i] - minValue;
		}
		else if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}
	cout << "Solution is " << maxProfit;
}

int main() {
	int* arr;
	int n;
	cout << "Enter n ";
	cin >> n;
	arr = new int[n];
	cout << "Enter n numbers";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	solve(arr, n);
}

#endif // BuySellStock