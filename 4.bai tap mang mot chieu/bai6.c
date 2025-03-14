#include <stdio.h>
int main() {
    int a[100];
    int n;
    printf("Nhap so luong phan tu cau mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
    }
    printf("Mnag sau khi thay the:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
