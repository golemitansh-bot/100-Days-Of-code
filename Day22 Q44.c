#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    scanf("%d", &n);

    int numerator = 1;
    int denominator = 2;

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
