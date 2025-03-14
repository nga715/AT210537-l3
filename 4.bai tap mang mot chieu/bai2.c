#include<stdio.h>
int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    printf("Mang theo chieu dao nguoc:\n");
    for(int i=9; i>=0; i--){
        printf("%d  ",a[i]);
    }
    return 0;
}
