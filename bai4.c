#include<stdio.h>
void tangdan(int *a, int n){
    int tg;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(*(a+i)> *(a+j)){
                tg=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=tg;
            }
        }
    }
}

void main(){
    int *a,n;
    printf("Moi ban nhap so luong phan tu cua mang: ");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",a+i);
    }
    tangdan(a,n);
    printf("Mang sau khi duoc sap xep la: ");
    for(int i=0; i<n; i++){
        printf("%d ",*(a+i));
    }
}
