#include "header.h"
#include<vector>

#ifdef ClimbingStairs

using namespace std;

int solveUtils(int, vector<int>&);

int solve(int n) {
	vector<int> vec(n+1, -1);
	return solveUtils(n, vec);
}

int solveUtils(int n, vector<int>& vec) {
	if (n <= 0) return 0;
	if (n == 1) return 1;
	if (vec[n] != -1) return vec[n];
	vec[n] = solveUtils(n - 1, vec) + solveUtils(n - 2, vec);
	return vec[n];
}

int main() {
	int n;
	cout << "Enter the value of n\n";
	cin >> n;
	cout << "The solutin is " << solve(n);
}

#endif