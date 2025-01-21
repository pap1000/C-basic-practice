#include <iostream>
/*#define PIE 3.1415926535   C에서 상수를 정의하는 방식*/

using namespace std;
int main() {
    const float PIE = 3.1415926535; //초기화의 방식으로 선언해줘야함
    int r = 3;
    float s = r * r * PIE;
    //1. 바뀔 필요가 없는 수
    //2. 바뀌면 안되는 수
    //상수

    cout << s << endl;

    //데이터형 변환
    /*
    1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을때
    2. 수식에 데이터형을 혼합하여 사용했을때
    3. 함수에 매개변수를 전달할때
    */

    int a = 3.141592;
    cout << a << endl;  //int는 정수형이기 때문에 소수점 부분이 저장되지 않고 무시되는 모습

    //강제적으로 데이터형 변환
    //typeName(a) (typeName)a
    char ch = 'M';
    cout << static_cast<int>(ch) << " " << (int)ch << " " << int(ch) << endl;
    //C++
    //static_cast<typeName>

    return 0;
}