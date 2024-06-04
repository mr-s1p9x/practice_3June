#include <iostream>
using namespace std;

// Прототипы функций, которые будут использоваться для расчета времени.
// Обе функции принимают целочисленный аргумент и возвращают значение типа double.
double Ivan(int);
double Alex(int);

// Функция, которая принимает количество строк кода и указатель на функцию,
// которая будет использована для оценки времени.
void estimate(int lines, double(*estimateFunction)(int));

int main()
{
    int code;
    cout << "How many lines of code do you need? - ";
    cin >> code;

    cout << "Here is Ivan's estimate: ";
    // Вызов функции estimate с указателем на функцию Ivan
    estimate(code, Ivan);

    cout << "Here is Alex's estimate: ";
    // Вызов функции estimate с указателем на функцию Alex
    estimate(code, Alex);

    return 0;
}

// Реализация функции Ivan. Просто возвращает 5% от числа строк.
double Ivan(int number)
{
    return 0.05 * number;
}

// Реализация функции Alex. Возвращает сумму 3% от числа строк
// и 0.04% от квадрата числа строк.
double Alex(int number)
{
    return 0.03 * number + 0.0004 * number * number;
}

// Реализация функции estimate, которая выводит оценку времени
// в зависимости от выбранной функции оценки.
void estimate (int lines, double(*estimateFunction)(int))
{
    cout << lines << " lines will take " << (*estimateFunction)(lines) << " hour(s)" << endl;
}