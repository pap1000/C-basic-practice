// C++pratice1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream> //전처리 지시자

/*c++에서 함수를 사용하기 전에 반드시 그 함수의 원형을 미리 정의해야한다.
*/

//iostream의 함수를 사용하기 위해서는 std를 사용하여 std::cout이라 입력해야 하나 이런 번거러움을 생략하기 위해 using namespace를 통해 제거한다
using namespace std;

int main() {
	//C++ 코드는 main이라는 이름의 함수가 반드시 있어야 한다.
	cout << "Hello";
	cout << "World!" << endl;
	/*endl은 줄바꿈
	cout은 다음 내용을 출력
	꺽쇠는 데이터의 방향을 의미*/

	return 0;
}