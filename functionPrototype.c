#include <stdio.h>

void hello(char[], int);

int main(){
    char name[]= "Sam";
    int age = 21;

    hello(name, age);


    return 0;
}

void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}