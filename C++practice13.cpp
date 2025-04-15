#include <iostream>

using namespace std;
int main() {
	//포인터: 사용할 주소에 이름을 붙인다
	//즉, 포인터는 포인터의 이름이 주소를 나타낸다
	//간접 연산자, 간접 참조 연산자 *

	/*
	int* a;
	int* b;
	int* c, d;	//c는 포인터 변수, d는 int형 변수
	*/
	int a = 6;
	int* b;

	b = &a;
	cout << "a의 값 " << a << endl;
	cout << "*b의 값 " << *b << endl;
	cout << "a의 주소 " << &a << endl;
	cout << "*b의 주소 " << b << endl;

	*b = *b + 1;

	//주소값은 변경되지 않음
	cout << "이제 a의 값은 " << a << endl;
	cout << "a의 주소 " << &a << endl;
	cout << "*b의 주소 " << b << endl;
	return 0;
}