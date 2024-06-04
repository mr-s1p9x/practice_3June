#include <iostream>
using namespace std;


int main()
{
    // Операция new выделяет динамическую память для переменной
    // определеяет сколько памяти потребуется для переменной
    // new находит память и возвращает адрес этой памяти
    int* pAge = new int;

    cout << "Enter your age: ";
    cin >> *pAge; // сразу разыменовываем, дабы менять/вводить значение

    cout << "Age " << *pAge << " is stored at " << pAge << endl;

    delete pAge; // освобождаем память

    return 0;
}