#include <iostream>

using namespace std;
int main() {
	//구조체: 다른 데이터형이 허용되는 데이터의 집합 <-> 배열은 같은 데이터형의 집합
	
	//축구 선수
	struct SoccerPlayer {
		//아래 데이터는 멤버라 불림
		string name;
		string position;
		int height;
		int weight;
	}B; //이렇게 구조체 정의 부분에서 중괄호 뒤에 변수명을 입력하면 새로운 구조체를 선언하지 않아도 구조체가 생성된다

	SoccerPlayer A = {
		"Son",
		"Striker",
		183,
		77
	};

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;

	B = {

	};	//아무것도 입력하지 않으면 0으로 초기화

	cout << B.height << endl;

	//구조체 역시 배열로 선언가능
	SoccerPlayer T[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};
	cout << T[1].height << endl;

	return 0;
}