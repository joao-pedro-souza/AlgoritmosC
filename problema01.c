/* Escreva um programa que leia um número inteiro e apresente seu antecessor e sucessor */
#include <stdio.h>

int main(void)
{
    int num, ant, suc;

    printf("Digite um numero: ");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("O antecessor de %d e %d.\n", num, ant);
    printf("O sucessor de %d e %d.\n", num, suc);
    return (0);
}