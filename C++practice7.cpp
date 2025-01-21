#include <iostream>

using namespace std;
int main() {
	/*
	배열(array): 같은 데이터형의 집합
	typeName arraryName[arraySize];
	*/
	short month[12] = { 1, 2, 3 };

	cout << month[3] << endl;	//배열 초기화 시 배열의 개수보다 적게 선언하면 남은 부분은 0으로 초기화된다

	//문자열: 문자의 열
	char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	char b[] = "Hello";	//쌍따옴표는 null문자를 포함하고 있음
	
	cout << a << endl;
	cout << b << endl;

	return 0;
}