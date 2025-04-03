//AND Operator
#include <stdio.h>
#include <stdbool.h>

int main(){

    float temp = 35;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }
    
    //OR Operator
    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");

    }
    else{
        printf("\nThe weather is good!");
    }
    
    //NOT Operator
    if(!sunny){
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's sunny outside!");
    }


    return 0;
}