#include <stdio.h>

int main(){

    char name[25];
    while(1) {
        printf("\nEnter your name: ");
        fgets(name, 25,stdin);

        if (name[0] != '\n') {
            break;
        }
        printf("You did not enter anything!\n");
    }

    printf("Hello %s", name);
    


    return 0;
}