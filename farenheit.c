#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("C: ");
    float cel = GetFloat();
    float far = ((cel * 9) / 5) + 32;
    printf("F: %.2f\n", far);
}