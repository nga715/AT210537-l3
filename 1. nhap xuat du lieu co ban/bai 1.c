#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("Hay nhap mot gia tri bat ky:");
    scanf("%d",&x);
    int a=x*x, b=pow(x,3), c=pow(x,4);
    printf("Cac gia tri nhan lai la:\na=%d\nb=%d\nc=%d",a,b,c);
    return 0;
}
