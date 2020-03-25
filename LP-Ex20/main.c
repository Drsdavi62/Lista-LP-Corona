#include <stdio.h>
#include <stdlib.h>

 int ehPerfeito(int n);

int main()
{
    int n = 0;

    printf("Digite um numero\n");
    scanf("%d", &n);

    if(ehPerfeito(n) == 1){
        printf("Este numero eh perfeito\n");
    }else{
        printf("Este numero NAO eh perfeito\n");
    }
}

int ehPerfeito(int n){
    int soma = 0;
    for(int i = 1; i < n; i++){
        if(n%i == 0){
            soma = soma + i;
        }
    }
    if(soma == n){
        return 1;
    }else{
        return 0;
    }
}

