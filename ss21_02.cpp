#include <stdio.h>

int main() {
    FILE *file;
    char firstChar;

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt!\n");
        return 1;
    }

    firstChar = fgetc(file);

    if (firstChar != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", firstChar);
    } else {
        printf("File rong hoac khong co noi dung.\n");
    }

    fclose(file);
    return 0;
}

