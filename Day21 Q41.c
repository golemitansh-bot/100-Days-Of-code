#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits;
    int middle, swapped;

    scanf("%d", &num);

    last = num % 10;

    digits = (int)log10(num);

    first = num / (int)pow(10, digits);

    middle = (num % (int)pow(10, digits)) / 10;

    swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}
