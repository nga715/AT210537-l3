#include<stdio.h>
int main(){
    int n;
    printf("Nhap so luong phan tu mang:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}
    int max=a[0];
    int min=a[0];
    int vitri max=0;
    int vitrimin=0;
    for(int i=1; i<n; i++){
        if(a[i]>max){ max=a[i]; vitrimax=i;
            printf("%d%d",max,vitrimax);}
        if(a[i]<min){ min= a[i]; vitrimin=i;
            printf("%d%d",min,vitrimin);}

    }

   return 0;

}
