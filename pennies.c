#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    int monthIn = 0;
    do {
        printf("Days in month: ");
        monthIn = GetInt();
    } while ((monthIn < 28) || (monthIn > 31));
    int penniesIn = 0;
    do {
        printf("Pennies on first day: ");
        penniesIn = GetInt();
    } while (penniesIn < 1);
    long double num = (penniesIn * (1-pow(2, monthIn))) / -100;
    printf("$%.2Lf\n", num);
}