#include <iostream>

using namespace std;
int main() {
	//공용체(union)
	//서로 다른 데이터형을 한 번에 한가지만 보관가능
	union Myunion {
		int intVal;
		long longVal;
		float floatVal;
	};

	Myunion test;
	//union은 한번에 하나의 데이터만 저장할 수 있음
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	//열거체(enum)
	//기호 상수를 만드는 것에 대한 또다른 방법
	enum spectrum {red=0, orange, yellow, green, blue, violet, indigo, ultraviolet}; //직접 기호의 값을 선언해줄 수도 있다
	/*
	1.spectrum을 새로운 데이터형 이름으로 만든다
	2. red, orange, yellow..0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만든다
	*/
	
	spectrum A = orange;
	cout << A << endl;

	//변수에 대입과 연산은 가능하지만 열거된 기호끼리 연산은 불가
	int b;
	b = blue;
	cout << b << endl;
	b = blue + 3;
	cout << b << endl;

	return 0;
}