#include <iostream>
using namespace std;

#define SIZE 10

void push (int i);
int pop(void);

int *top_s, *p1, stack[SIZE];

int main()
{
    int value;

    top_s = stack; // Инициализация top_s началом стека.
    p1 = stack;    // Инициализация p1 началом стека.

    do {
        cout << "Enter the number: ";
        cin >> value;

        if (value != 0)
        {
            push(value);
        }
        else
        {
            cout << "The number on stack top equal " << pop() << endl;
        }
    } while (value != -1);

    return 0;
}

void push(int i)
{
    p1++; // Сдвиг указателя на следующий элемент в массиве.
    if (p1 == (top_s + SIZE)) // Проверка на переполнение стека.
    {
        cout << "The stack is overflow" << endl;
        exit(1); // Завершение программы в случае переполнения.
    }
    *p1 = i;  // Запись значения в стек.
}

int pop(void)
{
    if (p1 == top_s)  // Проверка на пустой стек.
    {
        cout << "The stack is empty!" << endl;
        exit(1);  // Завершение программы, если стек пуст.
    }
    p1--; // Сдвиг указателя назад.
    return *(p1 + 1);  // Возврат значения верхнего элемента стека.
}
