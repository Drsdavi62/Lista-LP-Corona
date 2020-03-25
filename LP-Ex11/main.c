#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1 = 0;
    int ref1 = 0;
    int algarNum1 = 0;
    int num2 = 0;
    int ref2 = 0;
    int algarNum2 = 0;


    while((num1 <= 0) || (num1 > 10000)){
        printf("Digite um numero positivo e menor que 10000\n");
        scanf("%d", &num1);
        ref1 = num1;
    }

    while((num2 <= 0) || (num2 > 10000)){
        printf("Digite OUTRO numero positivo e menor que 10000\n");
        scanf("%d", &num2);
        ref2 = num2;
    }

    while(ref1 > 0){
        algarNum1++;
        ref1 = ref1/10;
    }


    while(ref2 > 0){
        algarNum2++;
        ref2 = ref2/10;
    }

    int a[algarNum1];
    int b[algarNum2];


    printf("\nVetor A\n");

    for(int i = 0; i < algarNum1; i++){
        a[i] = num1 % 10;
        num1 = num1 /10;
        printf("%d ",  a[i]);
    }

    printf("\nVetor B\n");

    for(int i = 0; i < algarNum2; i++){
        b[i] = num2 % 10;
        num2 = num2 /10;
        printf("%d ",  b[i]);
    }
}
