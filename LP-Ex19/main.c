#include <stdio.h>
#include <stdlib.h>

int validarData(int dia, int mes, int ano);

int main()
{
    int dia, mes, ano;

    printf("Digite uma data no formato DD/MM/AA\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if(validarData(dia, mes, ano) == 1){
        printf("Data valida\n");
    }else{
        printf("Data invalida\n");
    }
    return 0;
}

int validarData(int dia, int mes, int ano){
    int bis = 0;
    if((ano < 1) || (dia < 1) || (mes < 1) || (mes > 12) || (dia > 31)){
        return 0;
    }else{
        if(ano%4 == 0){
            if(ano%100 != 0){
                bis = 1;
            } else {
                if(ano%400 == 0){
                    bis = 1;
                } else {
                    bis = 0;
                }
            }
        } else {
            bis = 0;
        }

        if(mes == 2){
            if(bis == 1){
                if(dia > 29){
                    return 0;
                }else{
                    return 1;
                }
            } else{
                if(dia > 28){
                    return 0;
                }else{
                    return 1;
                }
            }
        }else{
            if(mes > 7){
                if(mes % 2 == 0){
                    if(dia > 31){
                        return 0;
                    } else {
                        return 1;
                    }
                }else{
                    if(dia > 30){
                        return 0;
                    } else {
                        return 1;
                    }
                }
            }else{
                if(mes % 2 == 0){
                    if(dia > 30){
                        return 0;
                    } else {
                        return 1;
                    }
                }else{
                    if(dia > 31){
                        return 0;
                    } else {
                        return 1;
                    }
                }
            }
        }
    }
}
