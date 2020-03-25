#include <stdio.h>
#include <stdlib.h>

int verificarSinal(int valor);

int main()
{
    int n = 0;
    printf("Digite um numero\n");
    scanf("%d", &n);

    if(verificarSinal(n) < 0){
        printf("Este numero eh negativo\n");
    }else if(verificarSinal(n) > 0){
        printf("Este numero eh positivo\n");
    } else{
        printf("Este numero eh 0\n");
    }
    return 0;
}

int verificarSinal(int valor){
    if(valor < 0){
        return -1;
    } else if (valor > 0){
        return 1;
    } else {
        return 0;
    }
}
