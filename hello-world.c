#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main() {
    int input;
    bool won = false;
    srand(time(NULL));
    int r = rand() % 10;

    while(!won) {
    printf("Insert your number:\t");
    scanf("%d", &input);
    if (r == input) {
        won = true;
        printf("You Won!!\n");
    } else if(r > input ) {
        printf("Insert a larger number\n");
    } else {
        printf("Insert a smaller number\n");
    }
    }
    return 0;
}
