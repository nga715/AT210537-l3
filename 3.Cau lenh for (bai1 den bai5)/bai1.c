#include<stdio.h>
#include<math.h>
int main(){
    int numbers[10];
    int sum=0;
    printf("Nhap 10 so nguyen bat ky:\n");
    for(int i=0; i<10; i++){
        printf("Nhap so thu tu %d: ",i+1);
        scanf("%d",&numbers[i]);
        sum +=numbers[i];
    }
    printf("Tong 10 so nguyen do la: %d",sum);
    return 0;
}
