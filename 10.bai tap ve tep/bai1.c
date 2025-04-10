#include <stdio.h>

#define MAX 100

// Hàm nhập ma trận
void nhapMaTran(int m, int n, int a[MAX][MAX], char ten) {
    printf("Nhap ma tran %c:\n", ten);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c[%d][%d] = ", ten, i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// Hàm in ma trận ra file
void ghiMaTran(FILE *f, int m, int n, int a[MAX][MAX], const char *ten) {
    fprintf(f, "%s\n", ten);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fprintf(f, "%5d", a[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "\n");
}

// Hàm tính tổng hai ma trận
void congMaTran(int m, int n, int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int m, n;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    FILE *fp;

    // Nhập kích thước ma trận
    printf("Nhap so dong m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);

    // Nhập dữ liệu cho A và B
    nhapMaTran(m, n, A, 'A');
    nhapMaTran(m, n, B, 'B');

    // Tính tổng C = A + B
    congMaTran(m, n, A, B, C);

    // Ghi các ma trận ra file
    fp = fopen("CONG_MT.C", "w");
    if (fp == NULL) {
        printf("Khong the mo tep de ghi.\n");
        return 1;
    }

    ghiMaTran(fp, m, n, A, "Ma tran A:");
    ghiMaTran(fp, m, n, B, "Ma tran B:");
    ghiMaTran(fp, m, n, C, "Tong ma tran C = A + B:");

    fclose(fp);
    printf("Da ghi ket qua vao file CONG_MT.C\n");

    return 0;
}
