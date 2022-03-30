#include <stdio.h>
int main() {
    int a;
    int b1, b2, b3;
    scanf("%d%1d%1d%1d", &a, &b1, &b2, &b3);
    b3 = a * b3;
    b2 = a * b2;
    b1 = a * b1;
    printf("%d\n%d\n%d\n%d", b3, b2, b1, b3 + b2*10 + b1*100);
    return 0;
}