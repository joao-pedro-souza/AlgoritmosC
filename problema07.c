/* Elabore um programa que receba o nome e a idade de uma pessoa e informe o nome, a idade e o valor 
da mensalidade do plano de saúde. A tabela a seguir apresenta os valores da mensalidade:
Até 18 anos --------- R$50,00
De 19 a 29 anos ----- R$70,00 
De 30 a 45 anos ----- R$90,00
De 46 a 65 anos ----- R$130,00
Acima de 65 anos ---- R$170,00 */
#include <stdio.h>

int main(void)
{
    char nome[20];
    int idade;

    printf("Informe seu nome: ");
    scanf("%s", &nome);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Mensalidade do plano de saude: R$");

    if (idade <= 18)
        printf("50,00");
    else
        if (idade > 18 && idade <= 29)
            printf("70,00");
        else    
            if (idade > 30 && idade <= 45)
                printf("90,00");
            else
                if (idade > 45 && idade <= 65)
                    printf("130,00");
                else
                    printf("170,00");
    return (0);
}