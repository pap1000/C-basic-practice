#include <iostream>
/*#define PIE 3.1415926535   C���� ����� �����ϴ� ���*/

using namespace std;
int main() {
    const float PIE = 3.1415926535; //�ʱ�ȭ�� ������� �����������
    int r = 3;
    float s = r * r * PIE;
    //1. �ٲ� �ʿ䰡 ���� ��
    //2. �ٲ�� �ȵǴ� ��
    //���

    cout << s << endl;

    //�������� ��ȯ
    /*
    1. Ư�� ���������� ������ �ٸ� ���������� ���� ����������
    2. ���Ŀ� ���������� ȥ���Ͽ� ���������
    3. �Լ��� �Ű������� �����Ҷ�
    */

    int a = 3.141592;
    cout << a << endl;  //int�� �������̱� ������ �Ҽ��� �κ��� ������� �ʰ� ���õǴ� ���

    //���������� �������� ��ȯ
    //typeName(a) (typeName)a
    char ch = 'M';
    cout << static_cast<int>(ch) << " " << (int)ch << " " << int(ch) << endl;
    //C++
    //static_cast<typeName>

    return 0;
}