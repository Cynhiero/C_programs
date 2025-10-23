/*
Name: Njogu Cynthia Wangui
Reg No: PA106/G/29296/25
Desription:Program to convert to celcius.
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius

float Celsius(float fahrenheit)
 {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

int main() 
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = Celsius(fahrenheit);

    printf(" \nTemperature in Celsius: %.2f°C\n", celsius);

    return 0;
}