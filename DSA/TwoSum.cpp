#include"header.h"

#ifdef TwoSum

using namespace std;

void solve(int* arr, int n, int target) {
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int diff = target - arr[i];
		if (m.find(diff) != m.end()) {
			cout << "The target sum found at indices " << m[diff] <<" and " << i;
			return;
		}
		else {
			m.insert(make_pair(arr[i], i));
		}
	}
}

int main() {
	int arr[5]{ 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int target = 7;
	solve(arr, n, target);
}

#endif // 
