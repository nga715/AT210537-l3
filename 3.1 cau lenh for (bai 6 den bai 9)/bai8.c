#include<stdio.h>
#include<math.h>
long long a(int n){
        if(n<0){
            printf("Giai thua khong xac dinh so nguyen am\nMoi nhap lai");
            return 0;
        }
        if(n==0){
            printf("Gia tri cua giai thua la: %d",n);
        }
        long long b=1;
        for(int i=1;i<=n;i++){
            b*=i;
        }
        return b;
    }
    int main() {
    int n;
    printf("hay nhap mot so n bat ky : ");
    scanf("%d", &n);
    long long b = a(n);
    if (b == -1) {
        printf("Giai thừa không xác định cho số âm.\n");
    } else {
        printf("%d! = %lld\n", n,b);
    }
    return 0;
}
