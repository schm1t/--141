// вариант 5

#include <stdio.h>

int main(void){
    double t = 20, I, U;
    printf("Hello! What is the current in the circuit?\n");
    scanf("%lf", &I);
    printf("Hello! What is the voltage in the electrical circuit?\n");
    scanf("%lf", &U);

    printf("The work done by an electric current can be calculated using the formula: A = I * U * t\n");
    printf("%lf\n", I * U * t);
    return 0;
}