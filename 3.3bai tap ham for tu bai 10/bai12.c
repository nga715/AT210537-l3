#include<stdio.h>
#include<math.h>
int main(){
    double x, eps, term, sum;
    int n;
    printf("Nhap x :");
    scanf("%lf",&x);
    printf("Nhap do chinh xac Eps: ");
    scanf("%lf",&eps);
    x=x*3.14/180;
    term=x;
    sum=x;
    n=0;
    while(fabs(term)>eps){
        n++;
        term *= -x*x/((2*n)*(2*n+1));
        sum+=term;
    }
    printf("GIa tri gan dung cua sin(%.5lf) la: %lf\n",x,sum);
    return 0;
}
