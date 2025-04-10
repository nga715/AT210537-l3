#include<stdio.h>
long long fibonaci(int n){
    if(n==0) return 0;
    if(n==1 || n==2) return 1;

    long long a=1, b=1, tong;
    for(int i=3; i<=n; i++){
        tong = a+b;
        a=b;
        b=tong;
    }
    return b;
}
int main(){
    int n;
    printf("Nhap so n ma ban can tinh so fibonaci: ");
    scanf("%d",&n);
    printf("So fibonacci ban can tim la: %lld\n",n,fibonaci(n));
    return 0;
}
