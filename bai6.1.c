#include <stdio.h>
#include <math.h>
int main(){
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}
int main() {
    int num1, num2;
    printf("Nhập hai số nguyên: ");
    scanf("%d %d", &num1, &num2);
    printf("UCLN của %d và %d là: %d\n", num1, num2, ucln(num1, num2));
    printf("BCNN của %d và %d là: %d\n", num1, num2, bcnn(num1, num2));

    return 0;
}
}
