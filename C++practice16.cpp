#include <iostream>

struct MyStruct {
	char name[20];
	int age;
};

int main() {
	using namespace std;
	//���� ����ü ����
	MyStruct* temp = new MyStruct;

	cout << "����� �̸��� �Է��Ͻʽÿ�\n";
	cin >> temp->name;	//ȭ��ǥ�� ��� ����� ���

	cout << "����� ���̸� �Է��Ͻʽÿ�\n";
	cin >> (*temp).age;	//���� ����� ���

	cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
	cout << "����� " << temp->age << "�� �̱���!";

	return 0;
}