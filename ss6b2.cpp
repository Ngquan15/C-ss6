#include <stdio.h>

int main() {
    int numbers[5];
    int chan = 0;
    int le = 0;

    printf("Nhap 5 so nguyen:\n");
    for (int a = 0; a < 5; a++) {
        printf("So thu %d: ", a + 1);
        scanf("%d", &numbers[a]);
        if (numbers[a] % 2 == 0) {
            chan++;
        } else {
            le++;
            printf("SL so chan: %d\n", chan);
            printf("SL so le: %d\n", le);
        }
    }
    return 0;
}
