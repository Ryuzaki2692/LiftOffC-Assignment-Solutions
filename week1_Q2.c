#include <stdio.h>

int main()
{
    float tempc, far;
    printf("Enter the temperature in degree Celsius: ");
    scanf("%f", &tempc);
    far = ((tempc*9)/5) + 32;            //-> formula to change celcius into fahrenheit is (0°C × 9/5) + 32 = 32°F
    printf("Temperature in fahrenheit is %.2f\n", far);
    return 0;

}