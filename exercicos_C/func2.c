#include <stdio.h>
int main(){
    float orcamento;
    printf("\n digite o valor do orçamento para viagem \n");
    scanf("%f", &orcamento);
    
    if (orcamento >= 10000){
        printf ("\n vão para o exterior");
    } else{
        printf ("\n João e maria irão optar por viagem naional");
    }
    
    return 0;
}
