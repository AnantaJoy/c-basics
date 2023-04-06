// temperature conversion program from fahrenheit to celsius
#include <stdio.h>

int tempConversion(float fahr){
    float celsius;
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("The temperature in celsius is: %.2f\n", celsius);
}

int main()
{
    float fahr;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &fahr);
    tempConversion(fahr);
    return 0;
}
