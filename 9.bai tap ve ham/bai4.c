#include <stdio.h>

#define MAX 100

// Hàm nhập ma trận
void nhapMaTran(int mat[MAX][MAX], int dong, int cot, char ten) {
    printf("Nhap ma tran %c (%d x %d):\n", ten, dong, cot);
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%c[%d][%d] = ", ten, i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

// Hàm in ma trận
void inMaTran(int mat[MAX][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

// Hàm tính tổng hai ma trận
void tongMaTran(int a[MAX][MAX], int b[MAX][MAX], int ketQua[MAX][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            ketQua[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Hàm tính tích hai ma trận
void tichMaTran(int a[MAX][MAX], int b[MAX][MAX], int ketQua[MAX][MAX], int hang1, int cot1, int cot2) {
    for (int i = 0; i < hang1; i++) {
        for (int j = 0; j < cot2; j++) {
            ketQua[i][j] = 0;
            for (int k = 0; k < cot1; k++) {
                ketQua[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], tong[MAX][MAX], tich[MAX][MAX];
    int dong1, cot1, dong2, cot2;

    // Nhập ma trận A
    printf("Nhap kich thuoc ma tran A (hang cot): ");
    scanf("%d%d", &dong1, &cot1);
    nhapMaTran(a, dong1, cot1, 'A');

    // Nhập ma trận B
    printf("Nhap kich thuoc ma tran B (hang cot): ");
    scanf("%d%d", &dong2, &cot2);
    nhapMaTran(b, dong2, cot2, 'B');

    // Tính tổng nếu kích thước phù hợp
    if (dong1 == dong2 && cot1 == cot2) {
        tongMaTran(a, b, tong, dong1, cot1);
        printf("\nTong hai ma tran:\n");
        inMaTran(tong, dong1, cot1);
    } else {
        printf("\nKhong the tinh tong do khac kich thuoc!\n");
    }

    // Tính tích nếu phù hợp
    if (cot1 == dong2) {
        tichMaTran(a, b, tich, dong1, cot1, cot2);
        printf("\nTich hai ma tran:\n");
        inMaTran(tich, dong1, cot2);
    } else {
        printf("\nKhong the tinh tich do khac kich thuoc!\n");
    }

    return 0;
}
