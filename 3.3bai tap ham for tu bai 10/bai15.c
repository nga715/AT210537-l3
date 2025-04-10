#include<stdio.h>
#include<math.h>
int main(){
    double tien_gui, lai_suat_thang, tien_thu_duoc;
    int n_thang;
    printf("Hay nhap so tien ma ban muon gui: ");
    scanf("%lf ", &tien_gui);
    printf("Hay nhap so thang ma ban muon gui: ");
    scanf("%lf ", &n_thang);
    lai_suat_thang = 0.0045;
    tien_thu_duoc= tien_gui*pow(1+lai_suat_thang,n_thang);
    printf("So tien nhan duoc sau %d thang la: %.2lf dong\n", n_thang, tien_thu_duoc);
    return 0;
}
