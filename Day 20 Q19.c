#include <stdio.h>
int main() {
        int a, b, c;

        printf("Enter value of a: ");
        scanf("%d", &a);
        printf("Enter value of b: ");
        scanf("%d", &b);
        printf("Enter value of c: ");
        scanf("%d", &c);

        if (a == b && b == c) {
                printf ("Equilateral");
        }
        else if (a == b || b == c || a == c) {
                printf ("Isosceles");
        }
        else {
                printf("Scalene");
        }

        return 0;
}
