#include <iostream>

using namespace std;

int main() {
	double* p3 = new double[3]; //double�� ������ 3���� ������ ����. p3�� �迭 �̸�ó�� ���
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1;	//�����͸� 1 �������� double�� ������ ���� �Ѱ���ŭ �̵�

	cout << "Now p3[0] is " << p3[0] << " and ";	//�Ѵ� ���ڸ��� �з� 0.5, 0.8�� ��µ�
	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 - 1;
	delete[] p3;
	
	return 0;
}