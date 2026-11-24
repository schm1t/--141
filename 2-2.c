#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Вычисляет значение функции по заданной формуле
 * @param x значение переменной x
 * @return Рассчитанное значение
 */
double y(const double x);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf",y(x));
    return 0;
}

double y(const double x)
{
    if (x < 2)
    {
        return 1.5*pow(cos(x),2);
    }
    else
    {
        return pow(x-2,2)+6;
    }
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}
