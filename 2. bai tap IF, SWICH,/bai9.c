#include <stdio.h>
#include<math.h>
int main(){
    int nam, thang;
    printf("Nhap nam:");
    scanf("%d",&nam);
    printf("Nhap thang:");
    scanf("%d",&thang);
    if(thang<1 && thang>12){
        printf("Thang khong hop le!\nMoi nhap lai");
        return 1;}
    int ngay;
    switch(thang){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        ngay=31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        ngay=30;
        break;
    case 2:
        if((nam%4==0 && nam!=0) || nam%400==0){
            ngay=29;}
            else{
                    ngay= 28;
            }
            break;
}
    printf("Thang %d nam %d ngay %d",thang,nam,ngay);
}

