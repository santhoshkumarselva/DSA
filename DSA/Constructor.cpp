#include"header.h"

#ifdef Constructor

using namespace std;

class B {
public:
	B(int x) {
		cout << "Parameterized constructor inside B\n";
	}
};

class A {
public:
	int x;
	B b;
	A() = default;
	A(int x): b(x), x(x){
		cout << "Default constructor called\n";
	}
};

int main() {
	A obj(4);
}

#endif // Constructor

