#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    printf("Number: ");
    long long number = get_long_long();
    if (number < 100000000000000) {
        printf("INVALID\n");
    } else {
        long long num = number / 1000000000000000;
        if (num == 0) {
            printf("AMEX\n");
        } else if (num == 4) {
            printf("VISA\n");
        } else if (num == 5) {
            printf("MASTERCARD\n");
        } else {
            printf("INVALID\n");
        }
    }
}