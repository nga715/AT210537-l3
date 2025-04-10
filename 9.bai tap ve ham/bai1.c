#include<stdio.h>
#include<math.h>
double luythua(double x, double y){
    return pow(x,y);
}
int main(){
    double co_so, so_mu;
    printf("Moi ban nhap co so x: ");
    scanf("%lf",&co_so);
    printf("Moi ban nhap so mu y: ");
    scanf("%lf",&so_mu);
    double ket_qua=luythua(co_so, so_mu);
    printf("%.2lf^%.2lf= %.2lf\n", co_so, so_mu, ket_qua);
    return 0;
}
