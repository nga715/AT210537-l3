#include <stdio.h>
#define MAX 100

void nhapDaThuc(int poly[], int *bac, char ten) {
    printf("Nhap bac cua da thuc %c: ", ten);
    scanf("%d", bac);
    for (int i = 0; i <= *bac; i++) {
        printf("He so bac %d: ", i);
        scanf("%d", &poly[i]);
    }
}
void inDaThuc(int poly[], int bac) {
    for (int i = bac; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i != bac) printf(" + ");
            if (i == 0) printf("%d", poly[i]);
            else if (i == 1) printf("%dx", poly[i]);
            else printf("%dx^%d", poly[i], i);
        }
    }
    printf("\n");
}


int tinhTong(int p[], int bp, int q[], int bq, int tong[]) {
    int max = bp > bq ? bp : bq;
    for (int i = 0; i <= max; i++) {
        int hs_p = (i <= bp) ? p[i] : 0;
        int hs_q = (i <= bq) ? q[i] : 0;
        tong[i] = hs_p + hs_q;
    }
    return max;
}

int tinhGiaTri(int poly[], int bac, int x) {
    int ketqua = 0;
    for (int i = 0; i <= bac; i++) {
        int mu = 1;
        for (int j = 0; j < i; j++) mu *= x;
        ketqua += poly[i] * mu;
    }
    return ketqua;
}

int main() {
    int P[MAX] = {0}, Q[MAX] = {0}, T[MAX] = {0};
    int bacP, bacQ, bacT;
    int x;

    nhapDaThuc(P, &bacP, 'P');
    nhapDaThuc(Q, &bacQ, 'Q');

    printf("\nDa thuc P(x): ");
    inDaThuc(P, bacP);
    printf("Da thuc Q(x): ");
    inDaThuc(Q, bacQ);

    bacT = tinhTong(P, bacP, Q, bacQ, T);
    printf("Da thuc T(x) = P(x) + Q(x): ");
    inDaThuc(T, bacT);

    printf("\nNhap gia tri x: ");
    scanf("%d", &x);

    printf("\nGia tri P(%d) = %d\n", x, tinhGiaTri(P, bacP, x));
    printf("Gia tri Q(%d) = %d\n", x, tinhGiaTri(Q, bacQ, x));
    printf("Gia tri T(%d) = %d\n", x, tinhGiaTri(T, bacT, x));

    return 0;
}
