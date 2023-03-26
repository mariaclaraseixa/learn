//
// Created by maria clara seixa scheffel on 26/03/2023.
//
#include <stdio.h>
int main() {
    int number,
        hundred,
        dozen,
        unit,
        inverse,
        min,
        max;

    min =  100;
    max = 1000;
    number =  983;
    // printf("Enter an integer (bigger than %i and smaller than %i: ",min,max);
    // scanf("%d", &number);

    if(number > min && number < max) {
        dozen = number % 100;
        hundred = (number - dozen) / 100;
        unit = dozen % 10;
        dozen = (dozen - unit) / 10;
        inverse = (unit * 100) + (dozen * 10) + hundred;
        printf("number  = %i\n", number);
        printf("hundred = %i\n", hundred);
        printf("dozen  = %i\n", dozen);
        printf("unit = %i\n", unit);
        printf("inverse = %i\n", inverse);
    } else {
        printf("The number is %i it must be bigger than %i  and smaller than %i", number, min, max);
    }
    return 0;
}
