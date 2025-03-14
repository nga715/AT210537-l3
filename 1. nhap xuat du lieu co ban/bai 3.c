#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("Nhap cac gia tri can tinh:");
    scanf("%d%d",&x,&y);
    int a=x+y, b=x-y, c=x*y,d=x/y;
    printf("Gia tri can tim la:\na=%d\nb=%d\nc=%d\nd=%d",a,b,c,d);
    return 0;
}
