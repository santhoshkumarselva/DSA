#include"header.h"
#include<set>

using namespace std;

#define ContainsDuplicate

bool solve(int* arr, int n) {
	set<int> s;
	for (int i = 0; i < n; i++) {
		if (s.find(arr[i]) != s.end()) return true;
		else s.insert(arr[i]);
	}
	return false;
}

int main() {
	int n, * arr;
	cout << "Enter n";
	cin >> n;
	arr = new int[n];
	cout << "Enter n numbers";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (solve(arr, n)) {
		cout << "It contains duplicate";
	}
	else {
		cout << "It doesn't contain duplicate";
	}
	return 0;
}