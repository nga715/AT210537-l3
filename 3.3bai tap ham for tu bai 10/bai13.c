#include<stdio.h>
#include<math.h>
int main(){
    double x, eps;
    printf("Nhap gia tri cua x: ");
    scanf("%lf", &x);
    printf("Nhap gia tri cua Eps: ");
    scanf("%lf",&eps);
    double E=1;
    double sum = E;
    int j=1;
    while(fabs(E)>=eps){
        E*=x/j;
        sum += E;
        j++;
    }
    printf("Gia tri cua e^%.2lf la : %lf\n", x,sum);
    return 0;
}
