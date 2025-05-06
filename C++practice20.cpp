#include <iostream>

using namespace std;
int main() {
	//배열 기반 반복문
	int a[5] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << "\n";

	for (int i : a) {	//콜론 다음에 배열의 이름을 명시하면 배열의 원소 출력가능
		cout << i;
	}
	cout << "\n";

	//중첩 루프: 2차원 배열
	int temp[4][5] =
	{
		{1, 2, 3, 4, 5},
		{11, 22, 33, 44, 55},
		{111, 222, 333, 444, 555},
		{1111, 2222, 3333, 4444, 5555},
	};

	for (int j = 0; j < 4; j++) {
		for (int k = 0;k < 5;k++) {
			cout << temp[j][k] << " ";
		}
		cout << "\n";
	}


	return 0;
}