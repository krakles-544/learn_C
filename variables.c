#include <stdio.h>
#include <stdbool.h>

int main(){
    int  age = 23;//%d
    float gpa = 3.5;//4 bytes (32 bits of precision) 6 - 7 digits%f
    double d = 3.141592653589793;//8 bytes (64 bits of precision) 15 - 16 digits &lf
    char grade = 'B'; //%c
    char name[] = "Samuel";//%s
    bool e = false;//%d
    char f = 123; // 1 byte (-128 to +127) %d or %c
    unsigned char g = 120; // 1 byte (0 to +255) %d or %c
    short int h = 32767; // 2 bytes(-32,768 to +32,767) %d
    unsigned short int i = 65535; //2 bytes (0 to +65535) %d
    int j = 2147483647; //4 bytes(-2,147,483,648) to (+2,147,483,647) %d
    unsigned int k = 4294967295; //4 bytes (0 to +4.294,967,295) %u

    long long int l = 9223372036854775807; //8 bytes(-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615u; //8 bytes (0 to 18 quintillion) %llu


    //printf("Hello %s\n", name);
    //printf("You are %d years old\n", age);
    //printf("Your average grade is %c\n", grade);
    //printf("Your gpa is %f\n", gpa);
    //printf("%d", e);
    //printf("%c", f);
    //printf("%c", g);
    //printf("%d", j);
    //printf("%u", k);
    printf("%lld\n", l);
    printf("%llu", m);


    return 0;
}