#include <stdio.h>
void p(int a1[], int n1, int a2[], int n2, int b[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a1[i] <= a2[j]) {
            b[k++] = a1[i++];
        } else {
            b[k++] = a2[j++];
        }
    }

    while (i < n1) {
        b[k++] = a1[i++];
    }

    while (j < n2) {
        b[k++] = a2[j++];
    }
}

int main() {
    int n1,n2;
    int a1[100], a2[100], b[200];
    printf("Hay nhap so luong phan tu cua mangs 1: ");
    scanf("%d", &n1);
    printf("Nhap phan tu cua mang 1(da sap xep theo chieu tang dan):\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    printf("Nhap so luong phan tu cua mnag 2: ");
    scanf("%d", &n2);
    printf("Nhap phan tu cua mang 2 (da sap xep theo chieu tang dan):\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }
    p(a1, n1, a2, n2, b);
    printf("Mang ket qua sau khi ghep:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
