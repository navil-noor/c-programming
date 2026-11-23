#include <stdio.h>

int main()
{
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("celsius  fahr\n");

    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) + 32.0;
        printf("%4.0f %9.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}