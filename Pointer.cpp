#include <iostream>

using namespace std;

void plus1 (int *pa)
{
    (*pa)++; // прибавляем 1 к переменной по оределённому адресу
}

int main()
{
    int a = 4;
    int *pa = &a; // создаём указатель; присваиваем ему адрес переменной a
    cout << " address a : " << pa << endl;
    cout << " a = " << a << endl;
    cout << " a = " << *pa << endl;
    cout << " ================================== " << endl;

    plus1(pa); // передаём указатель в функцию

    cout << " a = " << a << endl;
    cout << " ================================== " << endl;

    plus1(&a);

    cout << " a = " << a << endl;
}
