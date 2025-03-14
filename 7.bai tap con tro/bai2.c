#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *b=a;
    printf("Mang 10 phan tu theo chieu ngang la: \n");
    for(int i=0; i<10; i++){
        printf("%d  ",b[i]);
    }
    return 0;
}
