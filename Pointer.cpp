#include <iostream>

using namespace std;

void plus1 (int *pa)
{
    (*pa)++; // ���������� 1 � ���������� �� ����������� ������
}

int main()
{
    int a = 4;
    int *pa = &a; // ������ ���������; ����������� ��� ����� ���������� a
    cout << " address a : " << pa << endl;
    cout << " a = " << a << endl;
    cout << " a = " << *pa << endl;
    cout << " ================================== " << endl;

    plus1(pa); // ������� ��������� � �������

    cout << " a = " << a << endl;
    cout << " ================================== " << endl;

    plus1(&a);

    cout << " a = " << a << endl;
}
