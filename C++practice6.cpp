#include <iostream>

using namespace std;
int main() {
	//+ - * / % �����ڵ�
	int a = 3 + 2; // + �����ڷ� �� �ǿ����ڰ� �����
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
	auto n = 100;	// n�� int
	auto x = 1.5;	// x�� float
	auto y = 1.3e12L;	// y�� long long

	return 0;
}