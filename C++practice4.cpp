#include <iostream>

using namespace std;

int main() {
	//char : ���� ������ 
	int a = 77;
	char b = a;
	char c = 'a'; //���� ����ǥ �ȿ� ���� ���ڴ� �״�� ���
	/*null ���ڷ� ���� c++������ ū ����ǥ�� ���� ����ǥ�� �����ؾ� ��(\0)
	ū ����ǥ���� ��������� null ���ڰ� ���ԵǾ� ����
	char�� �ϳ��� ���ڸ� ������ �� �־ ū ����ǥ�� �Ұ��� ��*/
	char d[] = {'a', 'b', 'c'}; //null ���ڸ� �Է����� �ʾ� ��ũ���� ��µ�
	char e[] = {'a', 'b', 'c', '\0'};

	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	//bool : 0 or 1
	bool f = 0;
	bool g = 1;
	bool h = 10;	//0�� ������ ��� ���� 1�� ����

	cout << f << g << h << endl;

	return 0;
}