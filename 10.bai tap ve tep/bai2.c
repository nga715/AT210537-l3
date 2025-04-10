#include <stdio.h>
#define MAX 100


void nhapMaTran(int m, int n, int a[MAX][MAX], char ten) {
    printf("Nhap ma tran %c:\n", ten);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c[%d][%d] = ", ten, i, j);
            scanf("%d", &a[i][j]);
        }
    }
}


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

void nhanMaTran(int m, int n, int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for(int k=0; k<m; k++){
                c[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
}

int main() {
    int m, n;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    FILE *fp;
    printf("Nhap so dong m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);
    nhapMaTran(m, n, A, 'A');
    nhapMaTran(m, n, B, 'B');
    nhanMaTran(m, n, A, B, C);
    fp = fopen("CONG_MT.C", "w");
    if (fp == NULL) {
        printf("Khong the mo tep de ghi.\n");
        return 1;
    }

    ghiMaTran(fp, m, n, A, "Ma tran A:");
    ghiMaTran(fp, m, n, B, "Ma tran B:");
    ghiMaTran(fp, m, n, C, "Tich ma tran C = A * B:");

    fclose(fp);
    printf("Da ghi ket qua vao file CONG_MT.C\n");

    return 0;
}
