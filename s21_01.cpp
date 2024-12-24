#include <stdio.h>

int main() {
    FILE *file;
    char input[250];

    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the tao file bt01.txt!\n");
        return 1;
    }

    printf("Nhap chuoi bat ky de ghi vao file bt01.txt: ");
    fgets(input, sizeof(input), stdin);

    fputs(input, file);

    fclose(file);

    printf("Da ghi chuoi vao file bt01.txt!\n");
    return 0;
}

