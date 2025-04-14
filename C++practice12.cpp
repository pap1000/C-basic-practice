#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int main() {
	int T; //테스트 케이스 수
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0, r1 = 0, r2 = 0; //조규현과 백승환의 x,y 좌표와 각각의 류재명까지의 거리
	double r3 = 0; //조규현과 백승환 사이의 거리

	//두 원의 접하는 점의 수를 구하는 것과 같음
	cin >> T;
	while (T > 0) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		r3 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

		//중심이 같을 경우
		if (r3 == 0) {
			if (r1 == r2)
				cout << "-1" << endl;	//같은 원
			else
				cout << "0" << endl;	//반지름이 다른 원
		}
		//중심이 다른 경우
		else {
			if ((r1 + r2) > r3 && abs(r1 - r2) < r3)
				cout << "2" << endl;	//두점에서 만나는 경우
			else if ((r1 + r2) == r3 || abs(r1 - r2) == r3)
				cout << "1" << endl;	//내접 혹은 외접인 경우
			else
				cout << "0" << endl;	//만나지 않는 경우

		}
		T--;
	}
	
	return 0;
}