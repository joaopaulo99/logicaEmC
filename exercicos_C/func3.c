#include <stdio.h>
int main(){
    int num;
    printf ("\n Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("\n o numero é par");
    } else{
        printf("\n o numero é impar");
    }
    return 0;
}
