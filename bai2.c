#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Hay nhap mot so bat ky:");
    scanf("%d",&n);
    if(n<2){
        printf("Moi ban nhap lai!");
    }
    for(int i=2; i<= n-1; i++){
        if(n%i==0){
            printf("Day khong phai so nguyen to! ");
            return 0;}
    }
    printf("Day la so nguyen to!");
}
