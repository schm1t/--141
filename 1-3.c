#include <stdio.h>

/**
 * @brief вычисляет работу электрического тока за 20 минут
 * @param current - сила тока в цепи
 * @param voltage - напряжение в цепи
 * @return работа тока в джоулях
 */
double work(const double current, const double voltage);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double current;
    const double voltage;

    printf("Hello! Write current: ");
    scanf("%ld", &current);
    printf("Hello! Write voltage: ");
    scanf("%ld", &voltage);

    printf("A = %lf J", work(current, voltage));

    return 0;
}

double work(const double current, const double voltage)
{
    const double seconds = 20 * 60;

    return current * voltage * seconds;
}
