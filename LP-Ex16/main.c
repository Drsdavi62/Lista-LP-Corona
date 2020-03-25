#include <stdio.h>
#include <stdlib.h>

long int somaDivisores(int n);

int main()
{
    int n = 0;
    int x = 0;
    int volta = 0;

    printf("Quantos numeros deseja calcular?\n");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        while(volta == 0){
            printf("Digite um numero inteiro positivo\n");
            scanf("%d", &n);
            if(n <= 0){
                volta = 0;
            } else{
                volta = 1;
            }
        }

        printf("A soma de seus divisores eh = %ld\n", somaDivisores(n));
        volta = 0;
        fflush(stdin);
    }
}

long int somaDivisores(int n){
    long int soma = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            printf("Divisor = %d\n", i);
            soma = soma + i;
        }
    }
    return soma;
}

