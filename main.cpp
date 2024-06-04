#include <iostream>
using namespace std;
// Создание указателей
/*
 * Чтобы определить указатель, необходимо выбрать для него тип, который будет соответствовать
 * типу объекта, на который будет указывать указатель, и после имени типа указатели установить оператор *
 *
 * Пример создания указателя:
 *
 * int age = 18;
 * int * pAge; // Переменная-указатель будет хранить адрес памяти для объектов типа int
 * pAge = age ; // НЕ правильно! так делать нельзя!
 * pAge = &age; // Все верно!
 */


int main() {
    int age = 18;
    double Pi = 3.14;

    cout << "Address of variable age is: " << &age << endl;

    cout << "Address of variable Pi is: " << &Pi << endl;

    cout << endl << endl;
    ///

    int age_2 = 25; // создали переменную
    int* p_age = &age_2; // создали указатель и присвоили ему адрес переменной age_2

    cout << "p_age is at: " << p_age << " address" << endl;

    cout << endl << endl;
    ///

    int d = 15;
    int e = 10;

    int* pointer = &d;
    cout << "*pointer = " << *pointer << endl; // получим 15

    pointer = &e;
    cout << "*pointer = " << *pointer << endl; // а теперь уже 10

    // Всегда инициализируйте указатели. Непроинициализированные указатели являются источниками ошибок и аварийного
    // завершения программы
    int* p_void = NULL; // нулевой указатель



    return 0;
}
