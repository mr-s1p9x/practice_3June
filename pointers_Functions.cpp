#include <iostream>
using namespace std;

// Функция для расчета площади круга. Принимает указатели на значения числа Пи, радиуса и площади.
// 'const double* const' означает, что и указатель, и значение, на которое он указывает, не могут быть изменены.
void calcArea(const double* const pPi, const double* const pRadius, double* const pArea)
{
    // Проверка наличия всех трех указателей на валидность, чтобы избежать ошибок разыменования нулевых указателей
    if (pPi && pRadius && pArea)
    {
        // Расчет площади круга по формуле A = πr^2
        // Разыменовываем указатели для доступа к их значениям и записываем результат в память, на которую указывает pArea
        *pArea = (*pPi) * (*pRadius) * (*pRadius);
    }
}


int main()
{
    const double pi = 3.1416; // Константа для значения числа Пи
    cout << "Enter radius of circle: ";

    double radius = 0; // Переменная для хранения значения радиуса
    cin >> radius; // Ввод радиуса пользователем

    double area = 0; // Переменная для хранения результата расчета площади

    // Вызов функции calcArea с адресами переменных pi, radius и area
    calcArea(&pi, &radius, &area);

    // Вывод рассчитанной площади круга
    cout << "Area is = " << area << endl;

    return 0;
}