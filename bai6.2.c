#include<stdio.h>
#include<math.h>
int main(){
    int a,i, sum=0;
    printf("Moi ban nhap so ban chon: ");
    scanf("%d",&a);
    if(a<=0){
        printf("Khong phai so hoan hao!\nMoi nhap lai.");
        return 0;
    }
    for(i=1;i<=(a/2);i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==a){
        printf("Day la so hoan hao!");
    }
    else{
        printf("Day khong phai so hoan hao!\n");
    }
    return 0;

}
