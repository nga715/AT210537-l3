#include<stdio.h>
#include<math.h>
int main(){
    float a1,b1,c1;
    printf("Hay nhap he so phuong trinh mot cua he:");
    scanf("%f%f%f",&a1,&b1,&c1);
    float a2,b2,c2;
    float x,y;
    printf("Hay nhap he so phuong trinh hai cua he:");
    scanf("%f%f%f",&a2,&b2,&c2);
    float d=a1*b2-a2*b1, dx=c1*b2-c2*b1, dy=a1*c2-a2*c1;
    if(d==0){
        if(dx==0 && dy==0){
           printf("He phuong trinh vo nghiem!");
        }
    } else{
        x=dx/d;
        y=dy/d;
        printf("Nghiem cua he phuong trinh la: x=%f y=%f",x,y);
    }
    return 0;

}
