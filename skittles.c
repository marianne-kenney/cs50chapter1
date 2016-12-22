#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int value = rand() % 1024;
    printf("I'm thinking of a number between 0 and 1023...\n");
    int num = GetInt();
    bool correct = false;
    do {
        if (num > value) {
            printf("Lower!\n");
            num = GetInt();
        } else if (num < value) {
            printf("Higher!\n");
            num = GetInt();
        } else {
            correct = true;
        }
    } while (correct == false);
    printf("YAYYYYYYY! Nom nom nom.\n");
}