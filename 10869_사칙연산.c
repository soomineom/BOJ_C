#include <stdio.h>
int main(void) {
    int a,b;
    int hap,cha,gop,mok,na;
    
    scanf("%d %d", &a, &b);
    hap = a + b;
    cha = a - b;
    gop = a * b;
    mok = a / b;
    na = a % b;
    
    printf("%d\n", hap);
    printf("%d\n", cha);
    printf("%d\n", gop);
    printf("%d\n", mok);
    printf("%d\n", na);
}
