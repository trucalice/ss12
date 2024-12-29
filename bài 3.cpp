#include <stdio.h>

long long factorial(int n) {
    if (n < 0) {
        return -1;
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    long long result = factorial(num);
    if (result == -1) {
        printf("Khong ton tai giai thua cho so am.\n");
    } else {
        printf("Giai thua cua %d la: %lld\n", num, result);
    }

    return 0;
}

