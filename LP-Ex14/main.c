#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[9][9];
    int vetor[81] = {0};
    int swap = 0;

    srand(time(0));

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            matriz[i][j] = rand()% 101;
            if(matriz[i][j]%2 == 0 || matriz[i][j] <= 0){
                j--;
                continue;
            }else{
                vetor[(i*9) + j] = matriz[i][j];
            }
        }
    }

    for (int c = 0 ; c < 81 - 1; c++)
    {
        for (int d = 0 ; d < 81 - c - 1; d++)
        {
          if (vetor[d] > vetor[d+1]) // For decreasing order use <
          {
            swap       = vetor[d];
            vetor[d]   = vetor[d+1];
            vetor[d+1] = swap;
          }
        }
    }

    for(int i = 0; i < 81; i++){
        printf("%d\n", vetor[i]);
    }


}
