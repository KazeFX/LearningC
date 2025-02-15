#include <stdio.h>

// print Fahrenheit-Celcius table for fahr = 0, 20, ..., 300
int main() 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit - Celsius Conversion Table\n----------------\n");
    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr = fahr + step;
    }
    celsius = lower;
    fahr = 0;
    printf("\n");
    while (celsius <= 300)
    {
        fahr = celsius * 9.0 / 5.0 + 32;
        printf("%3.0f\t\%6.1f\n",celsius,fahr);
        celsius = celsius + step;
    }
}
