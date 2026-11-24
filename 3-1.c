#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @param message сообщение-приглашение для ввода
 * @return Считанное значение
 */
double getValue(const char* message);

/**
 * @brief Проверяет, что шаг - положительное число
 * @param step шаг табуляции
 */
void checkStep(const double step);

/**
 * @brief Проверяет, что начало отрезка не больше его конца
 * @param xbegin начало отрезка табуляции
 * @param xend конец отрезка табуляции
 */
void checkSegment(const double xbegin,const double xend);

/**
 * @brief Проверяет, что функция определена в точке x
 * @param x значение переменной x
 * @return true, если функцию можно вычислить, иначе false
 */
bool isOOF(const double x);

/**
 * @brief Вычисляет значение функции по заданной формуле
 * @param x значение переменной x
 * @return Рассчитанное значение
 */
double getY(const double x);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double xbegin = getValue("Enter segment start: ");
    double xend = getValue("Enter segment end: ");
    double step = getValue("Enter step: ");
    checkStep(step);
    checkSegment(xbegin,xend);
    for (double x = xbegin; x < xend + step; x += step)
    {
        if (isOOF(x))
            {
                printf("x = %lf, y = %lf\n",x, getY(x));
            }
        else
            {
                printf("x = %lf, y is not define\n",x);
            }
    }
    return 0;
}

double getValue(const char* message)
{
    if (message != NULL)
    {
        printf("%s\n",message);
    }
    double value = 0;
    if (scanf("%lf", &value)!= 1)
    {
        printf("Input error");
        exit(1);
    }
    return value;
}

void checkStep(const double step)
{
    if (step<=0)
    {
        printf("Error, step have to be positive");
        exit(1);
    }
}

void checkSegment(const double xbegin,const double xend)
{
    if (xbegin > xend)
    {
        printf("Error, segment begin have to be "
        "less or equal segment end");
        exit(1);
    }
}

bool isOOF(const double x)
{
    return fabs(x)>=FLT_EPSILON; // функция не определена только в точке x = 0
}

double getY(const double x)
{
    return cos(2/x)-2*sin(1/x)+1/x;
}
