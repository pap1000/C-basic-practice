#include <iostream>

using namespace std;
int main() {

	char char1[20];
	char char2[20];
	string str1;
	string str2 = "panda";
	//char1 = char2; �߸���
	str1 = str2; //������

	cout << str1 << endl;
	cout << str1[0] << endl; //�迭ó�� �ε����� ���� ������ �����ϴ�

	return 0;
}