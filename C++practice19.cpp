#include <cstdio>
#include <iostream>

using namespace std;
int main() {
	string str = "Panda";
	bool a = true;
	bool b = false;
	for (int i = 0; i < 3; i++) {
		cout << "for�� �Դϴ�.\0";
	}

	while (a) {
		cout << "while�� �Դϴ�\0";
		a = false;
	}

	int j = 0;
	do {
		cout << "while�� �Դϴ�.\0";
		j++;
	} while (j<1);

	return 0;
}