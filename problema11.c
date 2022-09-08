/* O problema consiste em ler um conjunto de números inteiros e contar a quantidade de números pares e ímpares.
A leitura deve ser realizada até que seja lido o valor zero. */
#include <stdio.h>

int main(void)
{
    int par = 0;
    int impar = 0;
    int num;
    
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num % 2 == 0)
            par ++;
        else
            impar ++;
    } 
    while (num != 0);
    printf("Numeros pares digitados: %d\n", par);
    printf("Numeros impares digitados: %d", impar);
    return (0);
}