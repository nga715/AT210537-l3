#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    printf("Moi ban nhap gia tri cua x, y: ");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("Gia tri nhan lai la: %d  %d", x,y);

}
