#include <stdio.h>
int main(void){
    float peso, altura, imc, alturaAoQuadrado;
    int resp;
    printf("\n CALCULADORA IMC");
    do {
        printf("\n\nDigite o peso:");
        scanf("%f", &peso);
        printf("\nDigite a altura:");
        scanf("%f", &altura);
        alturaAoQuadrado = altura * altura;
        imc = peso / alturaAoQuadrado;
        printf("\n Seu IMC é %.2f", imc);
            if (imc < 18.50){
        printf("A BAIXO DO PESO");
    } else { if (imc > 24.90){ 
        printf("A cima do Peso");
    } else{ 
        printf("\n peso ideal");}
    }
        printf("\n\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
        } while (resp == 1);
    return 0;
    }