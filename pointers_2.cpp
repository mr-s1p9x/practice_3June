#include <iostream>
using namespace std;

// Сколько памяти занимают указатели

int main()
{
    int age = 30;
    double Pi = 3.14;
    char ch = 'Y';

    int* pInt = &age; // объявили указатель типа int и присвоили ему адрес age переменной
    double* pDouble = &Pi; // объявили указатель типа double и присвоили ему адрес Pi переменной
    char* pChar = &ch; // объявили указатель типа char и присвоили ему адрес ch переменной

    cout << "Sizeof fundamental types - " << endl;
    cout << "sizeof(int) = " << sizeof(int) << " byte" << endl;
    cout << "sizeof(double) = " << sizeof(double) << " byte" << endl;
    cout << "sizeof(char) = " << sizeof(char) << " byte" << endl;

    cout << "========================================" << endl;

    cout << "Sizeof pointers to fundamental types - " << endl;
    cout << "sizeof(pInt) = " << sizeof(pInt) << " byte" << endl;
    cout << "sizeof(pDouble) = " << sizeof(pDouble) << " byte" << endl;
    cout << "sizeof(pChar) = " << sizeof(pChar) << " byte" << endl;

    return 0;
}