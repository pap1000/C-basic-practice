#include <iostream>

using namespace std;
int main() {
	//����ü: �ٸ� ���������� ���Ǵ� �������� ���� <-> �迭�� ���� ���������� ����
	
	//�౸ ����
	struct SoccerPlayer {
		//�Ʒ� �����ʹ� ����� �Ҹ�
		string name;
		string position;
		int height;
		int weight;
	}B; //�̷��� ����ü ���� �κп��� �߰�ȣ �ڿ� �������� �Է��ϸ� ���ο� ����ü�� �������� �ʾƵ� ����ü�� �����ȴ�

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

	};	//�ƹ��͵� �Է����� ������ 0���� �ʱ�ȭ

	cout << B.height << endl;

	//����ü ���� �迭�� ���𰡴�
	SoccerPlayer T[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};
	cout << T[1].height << endl;

	return 0;
}