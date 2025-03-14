#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    printf("Moi ban nhap so hang va so cot trong ma tran: ");
    scanf("%d%d",&n,&m);
    int a[n][m], b[n][m];
    printf("Moi ban nhap ma tran a:\n");
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++) scanf("%d",&a[i][j]);
    }
    printf("Moi ban nhap ma tran b:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) scanf("%d",&b[i][j]);
    }
    int c[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Ma tran tong la:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
}
