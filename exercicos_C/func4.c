#include <stdio.h>
int main(){
    float nota_final;
    printf("\n informe a nota final do aluno: ");
    scanf("%f", &nota_final);
    
    if (nota_final >=60){
        printf("\n aprovado");
    } else if(nota_final >=50){
        printf("\n em recuperação");
    } else {
        printf("\n reprovado");
    }
    return 0;
}
