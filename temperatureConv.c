#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Fahrenheit to Celsius Conversion
    double input_temperature, output_temperature;
    puts("Enter input for Fahrenheit temperature value");
    scanf("%lf", &input_temperature);
    output_temperature = (input_temperature - 32) * 5 / 9;
    printf("%lf in Fahrenheit is equivalent to %lf Celsius \n", input_temperature, output_temperature);

    // Celsius to Fahrenheit Conversion
    // double input_temperature, output_temperature;
    // puts("Enter input for Celsius temperature value");
    // scanf("%lf", &input_temperature);
    // output_temperature = (input_temperature * 9 / 5) + 32;
    // printf("%lf in Celsius is equivalent to %lf Fahrenheit \n", input_temperature, output_temperature);

    return EXIT_SUCCESS;
}