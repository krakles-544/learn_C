#include <stdio.h>


int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nThe circumference is %.2lfcm", circumference);
    printf("\nThe area is %lfcm²", area);


    return 0;
}