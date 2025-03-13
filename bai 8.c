#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c,p,s;
    printf("Moi ban nhap chieu dai ba canh cua mot tam giac:");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b-c>0 && a+c-b>0 && b+c-a>0){
            if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
            printf("Day la tam giac vuong!\n");}
            else if((a*a+b*b==c*c&&a==b) || (b*b+c*c==a*a&&b==c) || (a*a+c*c==b*b&&a==c)){
            printf("Day la tam giac vuong can!\n");}
            else if(a==b||a==c||b==c){
                printf("Day la tam giac can!\n");}
            else if(a==b&&b==c){
                    printf("Day la tam giac deu!\n");}
            else{
                printf("Day la tam gac thuong!\n");}
                    p=a+b+c/2.0;
                    s=sqrt(p)*sqrt(p-a)*sqrt(p-b)*sqrt(p-c);
                    printf("Chu vi hinh tam giac: %f\nDien tich hinh tam giac: %f",a+b+c,s);

    }
    else{
        printf("Day khong phai la tam giac!\n");}
        return 0;
}
