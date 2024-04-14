#include "header.h"
#include<chrono>
using namespace std;

#ifdef MultiThreading

int CONST_VAL = 5;

void sum(int i, int j) {
	cout << i + j;
}

auto addConst = [&](int i) {
	cout << endl << i + CONST_VAL;
	};

thread_local int a = 5;

int main() {
	thread t1([](int i) { cout << i; }, 3);
	t1.join();
	this_thread::sleep_for(chrono::milliseconds(1000));
	thread t2(sum, 5, 5);
	t2.join();
	this_thread::sleep_for(chrono::milliseconds(1000));
	thread t3(addConst, 10);
	t3.join();
	thread *tArr[10];
	for (int i = 0; i < 10; i++) {
		tArr[i] = new thread([](int i) {
			a = a + i;
			cout << a;
			}, i);
		tArr[i]->join();
	}
	return 0;
}

#endif