#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 15;

    cout << "Value of variable a: " << a << endl;
    cout << "Value of variable b: " << b << endl;

    int* pointer = &a; // адрес а

    cout << "Pointer = " << pointer << endl; // указывает на адрес а
    cout << "*Pointer = " << *pointer << endl; // разыменовываем, получаем значение а = 10

    pointer = &b; // переписали в указатель уже значение b

    cout << "Pointer of b = " << pointer << endl; // уже указывает на адрес b
    cout << "*Pointer of b = " << *pointer << endl; // разыменовываем, получаем значение b = 15

    cout << endl << endl;
    // еще один пример
    // мы записали новое значение переменной через указатель, не меняя ее адрес
    // с помощью операции разыменования
    int age = 25;
    int *pAge = &age;

    cout << "Age equals " << age << endl;
    cout << "Address of age variable is " << pAge << endl;

    cout << "Enter new age: ";
    cin >> *pAge; // сразу разыменовываем адрес

    cout << "New age equals " << age << endl;
    cout << "New address of age variable is " << pAge << endl; // фактически, мы просто в адрес прописали новое значение


    return 0;
}