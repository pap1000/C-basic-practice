#include <iostream>

using namespace std;
int main() {
	//������: ����� �ּҿ� �̸��� ���δ�
	//��, �����ʹ� �������� �̸��� �ּҸ� ��Ÿ����
	//���� ������, ���� ���� ������ *

	/*
	int* a;
	int* b;
	int* c, d;	//c�� ������ ����, d�� int�� ����
	*/
	int a = 6;
	int* b;

	b = &a;
	cout << "a�� �� " << a << endl;
	cout << "*b�� �� " << *b << endl;
	cout << "a�� �ּ� " << &a << endl;
	cout << "*b�� �ּ� " << b << endl;

	*b = *b + 1;

	//�ּҰ��� ������� ����
	cout << "���� a�� ���� " << a << endl;
	cout << "a�� �ּ� " << &a << endl;
	cout << "*b�� �ּ� " << b << endl;
	return 0;
}