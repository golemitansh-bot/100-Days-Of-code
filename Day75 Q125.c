#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char text[500];

    scanf("%s", filename);

    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Unable to open file");
        return 1;
    }

    getchar();

    fgets(text, sizeof(text), stdin);

    fprintf(file, "\n%s", text);

    fclose(file);

    printf("File updated successfully with appended text.");

    return 0;
}
