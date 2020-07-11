#include <stdio.h>
int main() {
    int N,i,k;
    scanf("%d", &N);
    for(i=1;i<=N;i++){
        for(k=1;k<=i;k++)
            printf("*");
        printf("\n");}
   
    return 0;
}
