#include"header.h"

using namespace std;

#ifdef FunctionPointer


void egg() {
	cout << "Take this egg!";
}

void food(void (*functPtr)()) {
	functPtr();
}

int main() {
	food(egg);
	return 0;
}

#endif // FunctionPointer