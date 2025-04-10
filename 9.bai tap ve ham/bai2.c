#include<stdio.h>
long long tinhluythua(int n){
    if(n<0)
        return -1;
    if(n==0 || n==1)
        return 1;
    if(n>1) {
        long long gthua=1;
        for(int i=2; i<=n; i++){
            gthua*=i;
        }
        return gthua;
    }

}
int main(){
    int so_n;
    printf("Moi ban nhap so nguyen khong am: ");
    scanf("%d",&so_n);
    long long giaithua=tinhluythua(so_n);
    if(giaithua==-1)
        printf("Giai thua khong xac nhan so am!");
    else
        printf("Ket qua cua s%d! = %lld\n", so_n, giaithua);

    return 0;

}
