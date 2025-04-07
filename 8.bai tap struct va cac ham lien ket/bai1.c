#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct SO_LIEU_BAN_HANG{
    int STT;
    char Ten_Hang[50];
    int Don_Gia;
    int So_Luong;
    long long Thanh_Tien;

};
typedef struct SO_LIEU_BAN_HANG BH;

void nhap2(BH *x){
    printf("Moi ban nhap STT:");
    scanf("%d",&x->STT);
    getchar();
     printf("Moi ban nhap ten hang: ");
     gets(x->Ten_Hang);
     printf("Moi ban nhap don gia: ");
     scanf("%d", &x->Don_Gia);
      printf("Moi ban nhap so luong: ");
     scanf("%d",&x->So_Luong);
     x->Thanh_Tien= (long long)x->So_Luong*x->Don_Gia;

}

long long tinhTongTien(BH a[], int n) {
    long long tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i].Thanh_Tien;
    }
    return tong;
}


 void in(BH a){
     printf("STT:%d   Ten_Hang:%s   Don_Gia:%d   So_Luong:%d    Thanh_Tien:%lld\n ", a.STT, a.Ten_Hang, a.Don_Gia, a.So_Luong, a.Thanh_Tien);
     printf("\n");

 }
 int compareTenHang(const void *a, const void *b) {
    const BH *hangA = (const BH *)a;
    const BH *hangB = (const BH *)b;
    return strcmp(hangA->Ten_Hang, hangB->Ten_Hang);
}

int main (){
    BH a[1000];
    int n;
    printf("Moi ban nhap so luong mat hang:");
    scanf("%d",&n);
    for(int i=0;i<n; i++) {nhap2(&a[i]);}
    qsort(a, n, sizeof(BH), compareTenHang);
        printf("\n\n    SO LIEU BAN HANG\n\n");
        printf("\n");
    for(int i=0; i<n; i++) {in(a[i]);}
    int tongTien = tinhTongTien(a, n);
    printf("\n          Tong so tien: %d\n", tongTien);

    return 0;


}
