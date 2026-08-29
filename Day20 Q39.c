#include <stdio.h>

int main() {
    int n, digit;
    long long product = 1;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product *= digit;
        }

        n /= 10;
    }

    printf("%lld", product);

    return 0;
}
