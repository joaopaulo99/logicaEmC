#include <stdio.h>
int main(){
    int n1 = 0;
    int n2 = 0;
    printf("\n digite o primeiro numero ");
    scanf("%d", &n1);
    printf("\n digite o seguno numero: ");
    scanf("%d", &n2);
    printf("\n n1 e n2 são iguais? %d", n1 == n2);
    printf("\n n1 e maior que n2? %d", n1 > n2);
    printf("\n n1 e menor ou igual a n2? %d", n1 <= n2);
}
