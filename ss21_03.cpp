#include <stdio.h>

int main() {
    FILE *file;
    char input[256];

    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt!\n");
        return 1;
    }

    printf("Nhap mot chuoi bat ky de ghi them vao file bt01.txt: ");
    fgets(input, sizeof(input), stdin);

    fputs(input, file);

    fclose(file);

    printf("Da ghi them chuoi vao file bt01.txt thanh cong!\n");
    return 0;
}

