#include<stdio.h>
#include<math.h>
int main(){
    int gdp2014, tocdotang;
    printf("Nhap tong thu nhap GDp nam 2014 tinh theo don vi USD: ");
    scanf("%d", &gdp2014);
    printf("Nhap toc do tang truong binh quan moi nam: ");
    scanf("%d", &tocdotang);
    int year=2014;
    double gdp = gdp2014;
    double gdpmax= 2*gdp2014;
    printf("\n    GDP TU NAM 2014 THEO CAC NAM\n\n");
    while(gdp<=gdpmax){
        printf("Nam %d:  GDP %.2lf ty USD \n", year, gdp);
        gdp *=(1+ tocdotang/100.0);
        year++;
    }
    return 0;
}
