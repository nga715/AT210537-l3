#include<stdio.h>
#include<math.h>
    int main(){
    int n,i;
    printf("Moi ban nhap so tu nhien bat ky: ");
    scanf("%d",&n);
    if(n<=0){
        printf("N phai la so nguyen duong\nMoi ban nhap lai!");
        return 0;
    }
    float sum=0.0;
    for(i=1;i<=n;i++){
        sum+=1.0/i;}
        printf("Tong cua S=%f\n",sum);
        return 0;
    }

