#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int a=x+y, b=x-y, c=x*y,d=x/y, i=a%b;
    printf("gia tri can tim la: a=%d\nb=%d\nc=%d\nd=%d\ni=%d",a,b,c,d,i);
    return 0;
}
