// вариант 5

#include <stdio.h>
#include <math.h>

int main(void){
    double lenght, width, perimeter, square;
    printf("Hello! Write your length and width: ");
    scanf("%lf %lf", &lenght, &width);

    printf("Perimeter: %lf\n", 2 * (lenght + width));
    printf("Square: %lf\n", lenght * width);

    double Diagonal = lenght * lenght + width * width;
    printf("Diagonal: %lf\n", pow(Diagonal, 0.5));
    return 0;
}