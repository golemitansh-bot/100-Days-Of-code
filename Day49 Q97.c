#include <stdio.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    // First character is always an initial
    printf("%c.", name[0]);

    // Print character after every space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}
