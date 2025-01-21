#include <iostream>

using namespace std;

int main() {
	//char : 작은 문자형 
	int a = 77;
	char b = a;
	char c = 'a'; //작은 따옴표 안에 적힌 글자는 그대로 출력
	/*null 문자로 인해 c++에서는 큰 따옴표와 작은 따옴표를 구분해야 함(\0)
	큰 따옴표에는 명시적으로 null 문자가 포함되어 있음
	char는 하나의 문자만 저장할 수 있어서 큰 따옴표는 불가한 것*/
	char d[] = {'a', 'b', 'c'}; //null 문자를 입력하지 않아 정크값이 출력됨
	char e[] = {'a', 'b', 'c', '\0'};

	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	//bool : 0 or 1
	bool f = 0;
	bool g = 1;
	bool h = 10;	//0을 제외한 모든 수는 1로 저장

	cout << f << g << h << endl;

	return 0;
}