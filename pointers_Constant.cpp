#include <iostream>
using namespace std;


int main()
{
    int a = 20;

    // Данные в указателе изменять нельзя
    const int* pA = &a;

    cout << "Address of pA which indicates on &a = " << pA << endl;

    ///
    int b = 30;

    // Можно изменить адрес памяти на который указывает указатель
    pA = &b;
    cout << "An updated address of pA which indicates on &b = " << pA << endl;

    // Ошибка компиляции, нельзя изменять данные
    //*pA = 40; // error: read-only variable is not assignable



    return 0;
}