/*  Домашнее задание №6.
Задача 2. От A до B.

Составить рекурсивную функцию, Выведите все числа от A до B включительно, в
порядке возрастания, если A < B, или в порядке убывания в противном случае.
Данные на входе: Два целых числа через пробел.
Данные на выходе: Последовательность целых чисел.

Пример №1
Данные на входе: 5 2
Данные на выходе: 5 4 3 2
*/

#include <stdio.h>

int missing_numbers(int a, int b)
{
    if (a < b)
    {
        printf("%d ", a);
        a++;
        missing_numbers(a, b);
    }

    if (a > b)
    {
        printf("%d ", a);
        a--;
        missing_numbers(a, b);
    }
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    missing_numbers(a, b);
    printf("%d\n", b);
    return 0;
}
