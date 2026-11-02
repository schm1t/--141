#include <stdio.h>
#include <math.h>

/**
 * @brief вычисляет значение a по заданной формуле
 * @param x - значение переменной x
 * @param y - значение переменной y
 * @param z - значение переменной z
 * @return рассчитанное значение a
 */
double A(const double x, const double y, const double z);

/**
 * @brief вычисляет значение b по заданной формуле
 * @param a - значение переменной a
 * @param y - значение переменной y
 * @param z - значение переменной z
 * @return рассчитанное значение b
 */
double B(const double a, const double y, const double z);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double x = -0.5; // переменная x
    const double y = 1.7;  // переменная y
    const double z = 0.44; // переменная z

    const double a = A(x, y, z); // a нужна для вычисления b, поэтому считаем её первой
    const double b = B(a, y, z);

    printf("a = %lf\n", a);
    printf("b = %lf", b);

    return 0;
}

double A(const double x, const double y, const double z)
{
    // exp - е в степени, sin - синус, sqrt - корень, fabs - модуль
    return exp(-y * z) * sin(x * z - y) - sqrt(fabs(y * z + x));
}

double B(const double a, const double y, const double z)
{
    // cos - косинус, pow(z, 2) - z в квадрате
    return y * sin(a * pow(z, 2) * cos(2 * z)) - 1;
}
