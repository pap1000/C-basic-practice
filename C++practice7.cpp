#include <iostream>

using namespace std;
int main() {
	/*
	�迭(array): ���� ���������� ����
	typeName arraryName[arraySize];
	*/
	short month[12] = { 1, 2, 3 };

	cout << month[3] << endl;	//�迭 �ʱ�ȭ �� �迭�� �������� ���� �����ϸ� ���� �κ��� 0���� �ʱ�ȭ�ȴ�

	//���ڿ�: ������ ��
	char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	char b[] = "Hello";	//�ֵ���ǥ�� null���ڸ� �����ϰ� ����
	
	cout << a << endl;
	cout << b << endl;

	return 0;
}