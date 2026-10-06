#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    double x = -0.5, y = 1.7, z = 0.44;
    double a, b;

    a = exp(-y*z)*sin(x*z - y) - sqrt(y*z + x);
    b = y*sin(a*pow(z,2)*cos(2*z)) - 1;

    printf("x = %.4f\ny = %.4f\nz = %.4f\n", x, y, z);
    printf("a = %.4f\nb = %.4f\n", a, b);
    printf("\n");

    return 0;
}
