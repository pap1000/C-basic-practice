#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int main() {
	int T; //�׽�Ʈ ���̽� ��
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0, r1 = 0, r2 = 0; //�������� ���ȯ�� x,y ��ǥ�� ������ ���������� �Ÿ�
	double r3 = 0; //�������� ���ȯ ������ �Ÿ�

	//�� ���� ���ϴ� ���� ���� ���ϴ� �Ͱ� ����
	cin >> T;
	while (T > 0) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		r3 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

		//�߽��� ���� ���
		if (r3 == 0) {
			if (r1 == r2)
				cout << "-1" << endl;	//���� ��
			else
				cout << "0" << endl;	//�������� �ٸ� ��
		}
		//�߽��� �ٸ� ���
		else {
			if ((r1 + r2) > r3 && abs(r1 - r2) < r3)
				cout << "2" << endl;	//�������� ������ ���
			else if ((r1 + r2) == r3 || abs(r1 - r2) == r3)
				cout << "1" << endl;	//���� Ȥ�� ������ ���
			else
				cout << "0" << endl;	//������ �ʴ� ���

		}
		T--;
	}
	
	return 0;
}