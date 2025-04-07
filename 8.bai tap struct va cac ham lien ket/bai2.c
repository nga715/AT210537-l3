#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct sinhvien{
    int STT;
    char Ho_ten[50];
    int Tuoi;
    double Diem;

};
typedef struct sinhvien SV;

 SV nhap1(){
     SV x;
     printf("Moi ban nhap STT:");
     scanf("%d",&x.STT);
     printf("Moi ban nhap Ho ten sinh vien: ");
     gets(x.Ho_ten);
     printf("Moi ban nhap tuoi cua sinh vien: ");
     scanf("%d", &x.Tuoi);
     printf("Moi ban nhap diem cua sinh vien: ");
     scanf("%lf",&x.Diem);
     return x;
 }
void nhap2(SV *x){
    printf("Moi ban nhap STT:");
    scanf("%d",&x->STT);
     printf("Moi ban nhap Ho ten sinh vien: ");
     getchar();
     gets(x->Ho_ten);
     printf("Moi ban nhap tuoi cua sinh vien: ");
     scanf("%d", &x->Tuoi);
      printf("Moi ban nhap diem cua sinh vien: ");
     scanf("%lf",&x->Diem);

}
 void in(SV a){
     printf("STT:%d Ho_ten:%s Tuoi:%d Diem:%.2lf ", a.STT, a.Ho_ten, a.Tuoi, a.Diem);
     printf("\n");

 }

int main (){
    SV a[1000];
    int n;
    printf("Moi ban nhap so luong sinh vien:");
    scanf("%d",&n);
    for(int i=0;i<n; i++) nhap2(&a[i]);
        printf("    DANH SACH SINH VIEN\n");
    for(int i=0; i<n; i++) in(a[i]);
    printf("\n");
}


