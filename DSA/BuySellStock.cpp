#include"header.h"
using namespace std;

#ifndef BuySellStockPractice

void solve(int* arr, int n) {
	int min_price = arr[0];
	int max_profit = INT_MIN;
	int current_profit;
	for (int i = 1; i < n; i++) {
		current_profit = arr[i] - min_price;
		min_price = (min_price < arr[i]) ? min_price : arr[i];
		max_profit = (max_profit > current_profit) ? max_profit : current_profit;
	}
	cout << "The max profit is " << max_profit;
}

int main() {
	int arr[]{ 100, 180, 260, 310, 40, 535, 695 };
	int n = sizeof(arr) / sizeof(arr[0]);
	solve(arr, n);
}

#endif // !BuySellStockPractice
