#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Вычисляет время, за которое путник одолел первую половину пути
 * @param t1 время движения на первом участке в часах
 * @param v1 скорость на первом участке
 * @param t2 время движения на втором участке в часах
 * @param v2 скорость на втором участке
 * @param t3 время движения на третьем участке в часах
 * @param v3 скорость на третьем участке
 * @return Рассчитанное значение
 */
double halfTime(const double t1, const double v1, const double t2, const double v2, const double t3, const double v3);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что значение - положительное число
 * @param value - считанное значение
 */
void checkValue(const double value);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter t1: ");
    double t1 = getDouble();
    checkValue(t1);
    printf("Enter v1: ");
    double v1 = getDouble();
    checkValue(v1);
    printf("Enter t2: ");
    double t2 = getDouble();
    checkValue(t2);
    printf("Enter v2: ");
    double v2 = getDouble();
    checkValue(v2);
    printf("Enter t3: ");
    double t3 = getDouble();
    checkValue(t3);
    printf("Enter v3: ");
    double v3 = getDouble();
    checkValue(v3);
    printf("Time is %lf\n",halfTime(t1,v1,t2,v2,t3,v3));
    return 0;
}

double halfTime(const double t1, const double v1, const double t2, const double v2, const double t3, const double v3)
{
    const double half = (v1*t1 + v2*t2 + v3*t3)/2; // половина всего пути
    if (v1*t1 >= half) // первую половину пути путник прошёл на первом участке
    {
        return half/v1;
    }
    else if (v1*t1 + v2*t2 >= half) // первую половину пути путник прошёл на втором участке
    {
        return t1 + (half - v1*t1)/v2;
    }
    else // первую половину пути путник прошёл на третьем участке
    {
        return t1 + t2 + (half - v1*t1 - v2*t2)/v3;
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

void checkValue(const double value)
{
    if (value <= 0)
    {
        printf("Error");
        exit(1);
    }
}
