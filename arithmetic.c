#include <stdio.h>

int main(){
    int x = 5;
    int y = 2;

    //float z = x / (float)y;
    //int z = x % y;
    //x++;
    //y--;
    int z = x+=y; //augmented asignment
    printf("%d", z);

    return 0;
}