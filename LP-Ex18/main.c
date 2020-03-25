#include <stdio.h>
#include <stdlib.h>

long int calcular_pot(long int x, long int n);

int main()
{
    long int x, n = 0;

    printf("Digite a base\n");
    scanf("%ld", &x);

    while(n < 1){
        printf("Digite um expoente maior ou igual a 1\n");
        scanf("%ld", &n);
    }
    printf("\nResultado = %ld", calcular_pot(x, n));
    return 0;
}

long int calcular_pot(long int x, long int n){
    long int result = x;
    for(int i = 2; i <= n; i++){
        result = result*x;
    }
    return (long int)result;
}
