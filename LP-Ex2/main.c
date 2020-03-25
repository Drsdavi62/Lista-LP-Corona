#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10];
    int b[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor de posicao %d\n", i+1);
        scanf("%d", &a[i]);
        if(i % 2 == 0){
            b[i] = a[i] * 5;
        }else{
            b[i] = a[i] + 5;
        }

    }

    for(int i = 9; i >= 0; i--){
        printf("A => %d ; B => %d\n", a[i], b[i]);
    }
}
