#include <stdio.h>

int main(){
    int age;

    printf("\nEnter you age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are signed up!");
    }
    else if(age < 0){
        printf("Invalid age!");
    }
    else{
        printf("You are too young to sign up!");
    }


    return 0;
}