#include<stdio.h>
#include<math.h>
int main(){
    int r;
    printf(" Hay nhap gia tri can tim: r=");
    scanf("%d",&r);
    float S=4*3.14*pow(r,2), V=4/3*pow(r,3);
    printf("Dien tich hinh cau la: S=%f\nThe tich hinh cau la: V=%f",S,V);
    return 0;
}
