#include <stdio.h>

void main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    printf ("Numbers low to high: ");
    scanf ("%d %d %d", &number1, &number2, &number3);
    printf("Sin ordenar: %d, %d, %d \n", number1, number2, number3);
    
    if(number1 < number2 && number1 < number3){
        printf("Ordenado: %d, ", number1);
        if(number2 < number3){
            printf("%d, ", number2);
            printf("%d", number3);
        }
        else{
            printf("%d, ", number3);
            printf("%d", number2);
        }
    }
    if(number2 < number1 && number2 < number3){
        printf("Ordenado: %d, ", number2);
        if(number1 < number3){
            printf("%d, ", number1);
            printf("%d", number3);
        }
        else{
            printf("%d, ", number3);
            printf("%d", number1);
        }
    }
    if(number3 < number2 && number3 < number1){
        printf("Ordenado: %d, ", number3);
        if(number1 < number2){
            printf("%d, ", number1);
            printf("%d", number2);
        }
        else{
            printf("%d, ", number2);
            printf("%d", number1);
        }
    }
    
}
