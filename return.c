#include <stdio.h>

double square(double x){
    return x * x;
}

int main(){

    double x = 5;
    printf("%.2lf", square(x));

    return 0;
}