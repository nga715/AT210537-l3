#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char ten_hang[30];
    int don_gia;
    int so_luong;
    int thanh_tien;
} MatHang;

void nhapHang(MatHang *mh) {
    printf("Nhap ten hang: ");
    fflush(stdin);
    gets(mh->ten_hang);
    printf("Nhap don gia: ");
    scanf("%d", &mh->don_gia);
    printf("Nhap so luong: ");
    scanf("%d", &mh->so_luong);
    mh->thanh_tien = mh->don_gia * mh->so_luong;
}

void ghiFile(MatHang ds[], int n, const char *tenfile) {
    FILE *f = fopen(tenfile, "wb");
    if (f == NULL) {
        printf("Loi mo file de ghi!\n");
        exit(1);
    }
    fwrite(&n, sizeof(int), 1, f);
    fwrite(ds, sizeof(MatHang), n, f);
    fclose(f);
}

void docVaInFile(const char *tenfile) {
    FILE *f = fopen(tenfile, "rb");
    if (f == NULL) {
        printf("Loi mo file de doc!\n");
        exit(1);
    }

    int n, tong = 0;
    MatHang mh;
    fread(&n, sizeof(int), 1, f);

    printf("\n%-35s\n", "SO LIEU BAN HANG");
    printf("%-5s %-15s %-10s %-10s %-12s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");

    for (int i = 0; i < n; i++) {
        fread(&mh, sizeof(MatHang), 1, f);
        printf("%-5d %-15s %-10d %-10d %-12d\n", i + 1, mh.ten_hang, mh.don_gia, mh.so_luong, mh.thanh_tien);
        tong += mh.thanh_tien;
    }

    printf("%40s %-12d\n", "Tong tien", tong);
    fclose(f);
}

int main() {
    MatHang ds[MAX];
    int n;

    printf("Nhap so mat hang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nMat hang %d:\n", i + 1);
        nhapHang(&ds[i]);
    }

    ghiFile(ds, n, "SO_LIEU.C");
    docVaInFile("SO_LIEU.C");

    return 0;
}
