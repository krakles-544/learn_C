#include <stdio.h>
#include <ctype.h>

void LowerCase(char str[]){
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}
int main(){

    char string1[] = "Sam";
    char string2[] = "Luke";

    LowerCase(string1);
    printf("%s", string1);




    return 0;
}