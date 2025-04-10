#include<stdio.h>
long long fibonacci(int n){
    if(n<= 1)
        return n;
    else{
       return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main (){
    int n;
    printf("Moi ban nhap so nguyen duong n: ");
    scanf("%d",&n);
    if(n<=0)
        printf("Vui long nhap so nguyen duong!");
    else{
        long long ketqua = fibonacci(n);
        printf(" So fibonacci thu %d la: %lld", n,ketqua);
    }
    return 0;
}
