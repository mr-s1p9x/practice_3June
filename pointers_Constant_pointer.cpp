#include <iostream>
using namespace std;


int main()
{
    int hour = 12;
    // Константный указатель на константу
    // Мы не можем поменять ни адрес, хранящийся в переменной pHour,
    // ни значение, которое хранится по этому адресу
    const int* const pHour = &hour; // самому указателю мы присвоили адрес переменной hour

    // Нельзя изменять данные, на которые указывает указатель
    //*pHour = 24; // error: read-only variable is not assignable

    int days = 30;
    // Нельзя изменять адрес, на который указывает указатель
    // pHour = &days; // error: cannot assign to variable 'pHour' with const-qualified type 'const int *const'
}