#include <iostream>

struct MyStruct {
	char name[20];
	int age;
};

int main() {
	using namespace std;
	//동적 구조체 생성
	MyStruct* temp = new MyStruct;

	cout << "당신의 이름을 입력하십시오\n";
	cin >> temp->name;	//화살표를 대신 사용한 모습

	cout << "당신의 나이를 입력하십시오\n";
	cin >> (*temp).age;	//점을 사용한 모습

	cout << "안녕하세요! " << temp->name << "씨!\n";
	cout << "당신은 " << temp->age << "살 이군요!";

	return 0;
}