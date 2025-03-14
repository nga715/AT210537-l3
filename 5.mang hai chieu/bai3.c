#include<stdio.h>
#include<math.h>
int main(){
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    int a[n][m], b[m][p], c[n][p];
    printf("Ban hay nhap ma tran a:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) scanf("%d",&a[i][j]);
    }
    printf("Ban hay nhap ma tran b:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++) scanf("%d", &b[i][j]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            c[i][j]=0;
            for(int k=0; k<m; k++){
                c[j][j] += a[i][k]*b[k][j];
            }
        }
    }
    printf("Ma tran c co gia tri la:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }

}
