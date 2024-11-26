#include <stdio.h>
#include <string.h>

int main() {
    char mk[] = "0123";
    char gioi_han[10];
    
    printf("nhap mat khau: ");
    scanf("%10s", mk);
    if (strcmp(mk, gioi_han) == 0) {
        printf("dang nhap thanh cong!\n");
    } else {
        printf("Mat khau sai\n");
    }
    return 0;
}
