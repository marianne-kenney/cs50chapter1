#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int value = rand() % 1024;
    printf("I'm thinking of a number between 0 and 1023...\n");
    int num = 500;
    printf("%i", num);
    bool correct = false;
    do {
        if (num > value) {
            printf("Lower!\n");
            num = num - (num / 2);
            printf("%i", num);
        } else if (num < value) {
            printf("Higher!\n");
            num = num + (num / 2);
            printf("%i", num);
        } else {
            correct = true;
        }
    } while (correct == false);
    printf("YAYYYYYYY! Nom nom nom.\n");
}