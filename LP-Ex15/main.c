#include <stdio.h>
#include <stdlib.h>

long int potencia(long int base, long int expoente);

int main()
{
    long int base, expoente = 0;

    printf("Digite a base\n");
    scanf("%ld", &base);

    while(expoente < 1){
        printf("Digite um expoente maior ou igual a 1\n");
        scanf("%ld", &expoente);
    }
    printf("\nResultado = %ld", potencia(base, expoente));
    return 0;
}

long int potencia(long int base, long int expoente){
    long int result = base;
    for(int i = 2; i <= expoente; i++){
        result = result*base;
    }
    return (long int)result;
}
