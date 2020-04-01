#include <iostream>

using namespace std;

void plus1 (int *pa)
{
 (*pa)++; // adding 1 to the variable by the allocated pointer
}

int main()
{
 int a = 4;
 int *pa = &a; // creating a pointer; assigning it the address of the variable " a"
 cout << "address a :" << pa << endl;
 cout << "a =" << a << endl;
 cout << "a =" << *pa << endl; // writing the variable "a" through the pointer
 cout << "================================== " << endl;

 plus1(pa); // passing the pointer to the function

 cout << "a =" << a << endl;
 cout << "================================== " << endl;

 plus1(&a);// passing the address of the variable to the function

 cout << "a =" << a << endl;
}
