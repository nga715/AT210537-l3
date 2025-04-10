#include<stdio.h>
void convert(int num, int base){
    char digits[]="012345789ABCDEF";
    char result[100];
    int index=0;
    if(num == 0) return 0;
    else {
        result[index++]= digits[num%base];
        num/=base;
    }
    for(int i=index-1; i>=0;i--){
        printf("%c", result[i]);
    }
}
int main(){
    int number;
    printf("Hay nhap mot so nguyen duong bat ky:");
    scanf("%d",&number);
    if(number<0){
        printf("Khong xac dinh! Ban hay nhap so nguyen duong bat ky!");
    }
    printf("He nhi phan (2): ");
    convert(number,2);
    printf("\n");
    printf("He bat phan (8):");
    convert(number, 8);
    printf("\n");
    printf("He thap luc phan (16):");
    convert(number, 16);
    return 0;
}
