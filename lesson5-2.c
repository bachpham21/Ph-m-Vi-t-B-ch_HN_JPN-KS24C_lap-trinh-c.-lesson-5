#include <stdio.h>
int main() {
    int soDung = 123; 
    int soNhap;
    printf("Nhap mot so (so dung la %d): ", soDung);
    do {
        scanf("%d", &soNhap); 
        if (soNhap != soDung) {
            printf("So ban nhap chua dung, vui long nhap lai: ");
        }
    } while (soNhap != soDung); 
    printf("Ban da nhap dung so %d. Chuong trinh ket thuc.\n", soDung);
    return 0;
}
