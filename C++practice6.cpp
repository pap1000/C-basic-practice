#include <iostream>

using namespace std;
int main() {
	//+ - * / % 연산자들
	int a = 3 + 2; // + 연산자로 두 피연산자가 연산됨
	int b = 3 - 2;
	int c = 3 / 2;
	int d = 3 % 2;
	int e = 3 * 2;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	//auto
	auto n = 100;	// n은 int
	auto x = 1.5;	// x는 float
	auto y = 1.3e12L;	// y는 long long

	return 0;
}