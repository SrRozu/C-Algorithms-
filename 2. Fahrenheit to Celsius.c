#include <stdio.h>

void main()
{
    float grades_celsius = 0;
    float grades_fahrenheit = 0;
    printf ("Grades to convert: ");
    scanf ("%f", &grades_fahrenheit);
    
    grades_celsius = (grades_fahrenheit - 32) * 5 / 9;
    
    printf("Fahrenheit: %f, Celsius: %f", grades_fahrenheit, grades_celsius);
    
}
