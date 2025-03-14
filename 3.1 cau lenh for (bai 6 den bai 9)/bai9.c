#include<stdio.h>
#include<math.h>
long long a(int n){
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
    double sum = 0.0;
    printf("Hay nhap gia tri n bat ky: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("n la so nguyen khong am.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / a(i);
    }
    printf("Tong giai thua S = %lf\n", sum);

    return 0;
}
