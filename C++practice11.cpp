#include <iostream>

using namespace std;
int main() {
	//����ü(union)
	//���� �ٸ� ���������� �� ���� �Ѱ����� ��������
	union Myunion {
		int intVal;
		long longVal;
		float floatVal;
	};

	Myunion test;
	//union�� �ѹ��� �ϳ��� �����͸� ������ �� ����
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	//����ü(enum)
	//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���
	enum spectrum {red=0, orange, yellow, green, blue, violet, indigo, ultraviolet}; //���� ��ȣ�� ���� �������� ���� �ִ�
	/*
	1.spectrum�� ���ο� �������� �̸����� �����
	2. red, orange, yellow..0�������� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� �����
	*/
	
	spectrum A = orange;
	cout << A << endl;

	//������ ���԰� ������ ���������� ���ŵ� ��ȣ���� ������ �Ұ�
	int b;
	b = blue;
	cout << b << endl;
	b = blue + 3;
	cout << b << endl;

	return 0;
}