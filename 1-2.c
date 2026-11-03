#include <stdio.h>

/**
 * @brief переводит вес из граммов в унции
 * @param grams - вес в граммах
 * @return вес в унциях
 */
double toOunces(const double grams);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double grams;
    printf("Hello! write grams: ");
    scanf("%lf", &grams);

    printf("%lf g = %lf oz", grams, toOunces(grams));

    return 0;
}

double toOunces(const double grams)
{
    const double ounce = 28.3;

    return grams / ounce;
}
