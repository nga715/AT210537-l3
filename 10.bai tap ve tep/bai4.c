
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char ho_ten[50];
    int tuoi;
    float diem_tb;
} SinhVien;

void nhapSinhVien(SinhVien *sv) {
    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(sv->ho_ten);
    printf("Nhap tuoi: ");
    scanf("%d", &sv->tuoi);
    printf("Nhap diem trung binh: ");
    scanf("%f", &sv->diem_tb);
}

void ghiDanhSach(SinhVien ds[], int n, const char *tenfile) {
    FILE *f = fopen(tenfile, "wb");
    if (f == NULL) {
        printf("Khong mo duoc file de ghi.\n");
        exit(1);
    }
    fwrite(&n, sizeof(int), 1, f);
    fwrite(ds, sizeof(SinhVien), n, f);
    fclose(f);
}

int docDanhSach(SinhVien ds[], const char *tenfile) {
    FILE *f = fopen(tenfile, "rb");
    if (f == NULL) {
        printf("Khong mo duoc file de doc.\n");
        exit(1);
    }
    int n;
    fread(&n, sizeof(int), 1, f);
    fread(ds, sizeof(SinhVien), n, f);
    fclose(f);
    return n;
}

void hienThiDanhSach(SinhVien ds[], int n) {
    printf("\n%-30s\n", "DANH SACH SINH VIEN");
    printf("%-5s %-20s %-10s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-10d %-10.2f\n", i + 1, ds[i].ho_ten, ds[i].tuoi, ds[i].diem_tb);
    }
}

void themSinhVien(const char *tenfile) {
    SinhVien sv;
    FILE *f = fopen(tenfile, "rb+");
    if (f == NULL) {
        printf("Khong mo duoc file de them.\n");
        exit(1);
    }

    int n;
    fread(&n, sizeof(int), 1, f);
    fseek(f, 0, SEEK_END);

    printf("\nNhap thong tin sinh vien can them:\n");
    nhapSinhVien(&sv);
    fwrite(&sv, sizeof(SinhVien), 1, f);

    rewind(f);
    n++;
    fwrite(&n, sizeof(int), 1, f);

    fclose(f);
}

void suaSinhVien(const char *tenfile) {
    FILE *f = fopen(tenfile, "rb+");
    if (f == NULL) {
        printf("Khong mo duoc file de sua.\n");
        exit(1);
    }

    int n, vt;
    fread(&n, sizeof(int), 1, f);

    SinhVien ds[MAX];
    fread(ds, sizeof(SinhVien), n, f);

    hienThiDanhSach(ds, n);

    printf("\nNhap vi tri sinh vien muon sua (1-%d): ", n);
    scanf("%d", &vt);
    vt--;
    if (vt < 0 || vt >= n) {
        printf("Vi tri khong hop le.\n");
        fclose(f);
        return;
    }

    printf("\nNhap tuoi moi: ");
    scanf("%d", &ds[vt].tuoi);
    printf("Nhap diem trung binh moi: ");
    scanf("%f", &ds[vt].diem_tb);

    fseek(f, sizeof(int) + vt * sizeof(SinhVien), SEEK_SET);
    fwrite(&ds[vt], sizeof(SinhVien), 1, f);
    fclose(f);
}

int main() {
    SinhVien ds[MAX];
    int n, choice;

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        nhapSinhVien(&ds[i]);
    }

    ghiDanhSach(ds, n, "DSACH.C");

    printf("\n>> Danh sach ban dau:\n");
    n = docDanhSach(ds, "DSACH.C");
    hienThiDanhSach(ds, n);

    themSinhVien("DSACH.C");
    n = docDanhSach(ds, "DSACH.C");
    printf("\n>> Danh sach sau khi them:\n");
    hienThiDanhSach(ds, n);

    suaSinhVien("DSACH.C");
    n = docDanhSach(ds, "DSACH.C");
    printf("\n>> Danh sach sau khi sua:\n");
    hienThiDanhSach(ds, n);

    return 0;
}
