#include <stdio.h>

int main() {
    int nam, thang;
    
    printf("nhap nam: ");
    scanf("%d", &nam);
    printf("thap thang: ");
    scanf("%d", &thang);
    
    if (thang < 1 || thang > 12) {
        printf("thang nam sai.\n");
    } else {
        int ngay;
        switch (thang) {
            case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
                ngay = 31;
                break;
            case 4:
			case 6:
			case 9:
			case 11:
                ngay = 30;
                break;
            case 2:
                if (ngay >= 1 && ngay <= 29) {
                    printf("Ngay thang nam day du la %d/%d/%d", thang, nam);
                } else {
                    printf("Ngay nhap vao khong hop le");
                }
                break;
        }
        printf("Thang %d nam %d .\n", thang, nam);
    }

    return 0;
}
