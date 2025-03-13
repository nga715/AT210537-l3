#include<stdio.h>
#include<math.h>
int main(){
    int diem;
    printf("Hay nhap diem cua ban:");
    scanf("%d",&diem);
    if(diem<5){
            printf("Ban xep loại Yeu!");}
    else if(diem>=5 && diem<7){
            printf("Ban xep loai Trung binh!");}
    else if(diem >=7 && diem<8){
            printf("Ban xep loạiKha!");}
    else if(diem >=8 && diem<9){
            printf("Ban xep loại Gioi!");}
    else if(diem>=9){
    printf("Ban xep loại Xuat sac!");}
    return 0;
}
