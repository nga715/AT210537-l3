#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Hay nhap gia tri cua a,b,c de giai phuong trinh bac 2:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0){
        if(b==0){
            if(c==0){
                printf("Phuong trinh vo so nghiem!\n");
            }
            else{
                printf("Phuong trinh vo nghiem!\n");
            }}
        else {
            printf("Phuong trinh co mot nghiem x=%0.2f\n",-(c/b));
        }
    }
    else{
    float delta=pow(b,2)-4*a*c;
     if(delta<0){
        printf("phuong trinh vo nghiem!");
    }
    else if(delta>0){
        float x1=(-b-sqrt(delta))/(2*a);
        float x2=(-b+sqrt(delta))/(2*a);
        printf("Gia tri cua x1 la: x1= %f\nGia tri cua x2 la: x2= %f",x1,x2);
    }
    else{
        float x=-b/(2.0*a);
        printf("Phuong trinh co hai nghiem kep x1=x2=%f",x);
    }
}
    return 0;
}
