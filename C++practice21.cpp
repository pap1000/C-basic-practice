#include <iostream>

//Baekjoon 10871
using namespace std;
int main() {
	int N, X;

	cin >> N;
	cin >> X;

	int* A = new int[N]; //malloc based on N
	int* B = new int[N];
	int j = 0;

	for (int i = 0;i < N;i++) {
		cin >> A[i];
		if (A[i] < X) {
			B[j] = A[i];
			j++;
		}
	}

	for (int k = 0;k < j;k++) {
		cout << B[k] << " ";
	}

	delete[]A;
	delete[]B;

	return 0;
}
