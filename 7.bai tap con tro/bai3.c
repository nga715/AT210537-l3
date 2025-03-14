#include<stdio.h>
#include<limits.h>
int timMax(int *a, int n){
    int max;

    max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max<*(a+i)){
            max=*(a+i);
        }
    }
    return max;
}
int timMin(int *a, int n){
    int min;

    min = INT_MAX;
    for(int i=0; i<n; i++){
        if(min>*(a+i)){
            min = *(a+i);
        }
    }
    return min;
}
void main(){
    int *a,n;
    printf("Nhap vao so luong phan tu cua mang:");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));
    for (int i=0; i<n;i++){
        printf("Nhap vao phan tu thu %d: ",i+1);
        scanf("%d ",a+i);
    }
    printf("Gia tri lon nhat cua mang la: %d",timMax(a,n));
    printf("Gia tri nho nhat cua mang la: %d ", timMin(a,n));
}
