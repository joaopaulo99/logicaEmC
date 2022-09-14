#include <stdio.h>
int main(){
    int n;
    
    printf("\n(1) para saldo\n(2) para extrato\n(3) para saque\n(4) para sair");
    printf("\nInforme a operação desejada: ");
    
    scanf("%d", &n);
    
    switch(n){
        case 1:
            printf("\nSaldo");
            break;
        case 2:
            printf("\nextrato");
            break;
        case 3:
            printf("\nSaque");
            break;
        case 4:
            printf("\nSair");
            break;
        default:
            printf("\ninvalido");
    }
return 0;    
}
