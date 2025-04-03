#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nEnter the temperature in celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("\nThe temperature in Farenheit is : %.1fF", temp);

    }
    else if(unit == 'F'){
        printf("\nEnter the temperature in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in celsius is: %.1fC", temp);
    }
    else{
        printf("\n %c is not a valid unit of temperature measurement", unit);
    }


    return 0;
}