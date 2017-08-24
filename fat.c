#include<stdio.h>

main(){
    int n, i, fat=1;
    printf("\nInforme o valor que deseja calcular o fatorial: ");
    scanf("%d", &n);
    for(i=n; i>0; i--){
        fat = fat*i;
    }
    printf("\nO fatorial de %d eh: %d\n", n, fat);
}
