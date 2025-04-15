#include <iostream>

using namespace std;

int main() {
	double* p3 = new double[3]; //double형 데이터 3개를 저장할 공간. p3를 배열 이름처럼 취급
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1;	//포인터를 1 증가시켜 double형 데이터 공간 한개만큼 이동

	cout << "Now p3[0] is " << p3[0] << " and ";	//둘다 한자리씩 밀려 0.5, 0.8일 출력됨
	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 - 1;
	delete[] p3;
	
	return 0;
}