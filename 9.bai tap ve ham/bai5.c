#include <stdio.h>

void chuyenCoSo(int n, int base) {
    char heSo[] = "0123456789ABCDEF"; // Hệ cơ số tối đa 16
    char ketQua[100]; // Mảng lưu chuỗi kết quả tạm thời
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        ketQua[i++] = heSo[n % base];
        n /= base;
    }

    // In ngược chuỗi
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", ketQua[j]);
    }
}

int main() {
    int so;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &so);

    if (so < 0) {
        printf("Chi ho tro so nguyen duong!\n");
        return 1;
    }

    printf("He nhi phan (co so 2): ");
    chuyenCoSo(so, 2);
    printf("\n");

    printf("He bat phan (co so 8): ");
    chuyenCoSo(so, 8);
    printf("\n");

    printf("He thap luc phan (co so 16): ");
    chuyenCoSo(so, 16);
    printf("\n");

    return 0;
}
