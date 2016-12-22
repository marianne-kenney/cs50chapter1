#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float amount = 0;
    do {
        printf("O hai! How much change is owed?\n");
        amount = GetFloat();
    } while (amount < 0);
    int am = (amount + 0.0001) * 100;
    int quarters = am / 25;
    int remain = am - ((int)quarters * 25);
    
    int dimes = remain / 10;
    remain = remain - ((int)dimes * 10);
    
    int nickels = remain / 5;
    
    int pennies = remain - ((int)nickels * 5);
    
    int all = quarters + dimes + nickels + pennies;
    printf("%d\n", all);
}