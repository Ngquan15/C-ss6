#include <stdio.h>

int main() {
    int numbers[8];
    int sum = 0;

    printf("nhap 5 so nguyen:\n");
    for (int a = 0; a < 5; a++) {
        printf("So thu %d: ", a + 1);
        scanf("%d", &numbers[a]);
        if (numbers[a] % 2 != 0) {
            sum += numbers[a];
            
            printf("Tong cac so le la: %d\n", sum);
        }
    }
	    return 0;
}
