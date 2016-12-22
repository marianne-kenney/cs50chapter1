#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int height = -1;
    do {
        printf("height: ");
        height = GetInt();
    } while(height < 0 || height > 23);
    for (int i = 0; i < height; i++) {
        for (int a = 0; a < (height - i - 1); a++) {
            printf(" ");
        }
        for (int b = 0; b < (i + 2); b++) {
            printf("#");
        }
        printf("\n");
    }
}