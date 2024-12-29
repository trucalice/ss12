#include <stdio.h>

void tinhTong(int a, int b, int *tong) {
    *tong = a + b;
}

int main() {
    int so1, so2, ketQua;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    tinhTong(so1, so2, &ketQua);
    printf("Tong cua hai so la: %d\n", ketQua);
    return 0;
}

