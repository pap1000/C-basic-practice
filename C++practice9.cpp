#include <iostream>

using namespace std;
int main() {

	char char1[20];
	char char2[20];
	string str1;
	string str2 = "panda";
	//char1 = char2; 잘못됨
	str1 = str2; //가능함

	cout << str1 << endl;
	cout << str1[0] << endl; //배열처럼 인덱스를 통해 접근이 가능하다

	return 0;
}