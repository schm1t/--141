#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Пункты выбора формулы вычисления
 */
enum Action
{
    PERIMETER = 1, // периметр прямоугольника
    AREA,          // площадь прямоугольника
    DIAGONAL       // длина диагонали прямоугольника
};

/**
 * @brief Вычисляет периметр прямоугольника с заданными сторонами
 * @param a сторона a прямоугольника
 * @param b сторона b прямоугольника
 * @return Рассчитанное значение
 */
double perimeter(const double a, const double b);

/**
 * @brief Вычисляет площадь прямоугольника с заданными сторонами
 * @param a сторона a прямоугольника
 * @param b сторона b прямоугольника
 * @return Рассчитанное значение
 */
double area(const double a, const double b);

/**
 * @brief Вычисляет длину диагонали прямоугольника с заданными сторонами
 * @param a сторона a прямоугольника
 * @param b сторона b прямоугольника
 * @return Рассчитанное значение
 */
double diagonal(const double a, const double b);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Считывает с клавиатуры целое число
 * @return Считанное значение
 */
int getInt();

/**
 * @brief Проверяет, что сторона - положительное число
 * @param side - считанное значение стороны прямоугольника
 */
void checkSide(const double side);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter side a: ");
    double a = getDouble();
    checkSide(a);
    printf("Enter side b: ");
    double b = getDouble();
    checkSide(b);
    printf("Enter 1 - perimeter, 2 - area, 3 - diagonal: ");
    int choice = getInt();
    if (choice < PERIMETER || choice > DIAGONAL)
    {
        printf("Error");
        exit(1);
    }
    enum Action action = (enum Action)choice;
    switch (action)
    {
        case PERIMETER:
            printf("Perimeter is %lf\n",perimeter(a,b));
            break;
        case AREA:
            printf("Area is %lf\n",area(a,b));
            break;
        case DIAGONAL:
            printf("Diagonal is %lf\n",diagonal(a,b));
            break;
    }
    return 0;
}

double perimeter(const double a, const double b)
{
    return 2*(a+b);
}

double area(const double a, const double b)
{
    return a*b;
}

double diagonal(const double a, const double b)
{
    return sqrt(pow(a,2)+pow(b,2));
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

int getInt()
{
    int choice = 0;
    if (scanf("%d",&choice) != 1)
        {
            printf("Error");
            exit(1);
        }
    return choice;
}

void checkSide(const double side)
{
    if (side <= 0)
    {
        printf("Error");
        exit(1);
    }
}
