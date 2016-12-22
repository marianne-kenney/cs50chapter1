#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    printf("ISBN: ");
    long long input = get_long_long();
    //printf("%lld", input);
    int addThis = 0;
    for (int i = 10; i > 0; i--) {
        int digi = input % 10;
        addThis = addThis + (digi * i);
        input = input / 10;
    }
    float whole = (float)addThis / 11;
    int integer = addThis / 11;
    if ((whole - integer) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
