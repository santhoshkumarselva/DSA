#include"header.h"
#include <map>
using namespace std;

#ifdef AddSum

int* solve(int* arr, int size, int target) {
    map<int, int> temp;
    for (int i = 0; i < size; i++) {
        if (temp.find(target - arr[i]) != temp.end()) {
            int* result = new int[2] {i, temp[target - arr[i]]};
            return result;
        }
        temp.insert(make_pair(arr[i], i));
    }
    int* result = new int[2] {0, 0};
    return result;
}

int main() {
    int arr[] = { 2, 7, 11, 15 };
    int target = 9;
    int* result = solve(arr, sizeof(arr) / sizeof(arr[0]), target);
    cout << result[0] << " " << result[1];
    delete[] result;  // Free the memory allocated for result
    return 0;
}

#endif // AddSum