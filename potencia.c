#include <stdio.h>
int main() {
    int s, x,n,i;
    printf("digite a base(inteiro nao-negativo):");
    scanf("%d", &x);
    printf("joga um ps4");
    scanf("%d",&n);
    i=0;
    s = 0;
    while(i<n){
      s=x*x;
      i++;
    }
    printf("\nO valor de %d elevado a %d = %d\n", x, n, s);
    return 0;
}