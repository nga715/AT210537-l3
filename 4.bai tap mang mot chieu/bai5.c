#include<stdio.h>
#include<math.h>
int main() {
    int a[100];
    int n, x;
    int count = 0;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap phan x can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    printf("Phan tu %d xuat hien %d trong mang ban vua nhap.\n", x, count);

    return 0;
}
