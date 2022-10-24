#include <stdio.h>

int main (){
    int num;
    printf("Please enter your favourite number: ");
    scanf(" %d", &num);
    printf("Wrong your favourite number is %d.", num-2);

    return 0;
}