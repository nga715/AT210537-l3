#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Moi ban nhap so n bat ky: ");
    scanf("%d",&n);
    printf("Cac uoc cua n do la: ");
    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}
