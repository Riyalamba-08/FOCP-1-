#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z, digits = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &x);

    y = x;

    while (y != 0) {
        y /= 10;
        digits++;
    }

    y = x;

    while (y != 0) {
        z = y % 10;
        result += pow(z, digits);
        y/= 10;
    }

    if ((int)result == x)
        printf("%d is an Armstrong number.\n", x);
    else
        printf("%d is not an Armstrong number.\n", x);

    return 0;
}
