/* De acordo com uma tabela médica, o peso ideal está relacionado com a altura e o sexo. 
Elabore um algoritmo que receba altura e sexo de uma pessoa e calcule e imprima seu peso ideal, sabendo que:
Para homens ------- (72.7 x altura) - 58
Para mulheres ----- (62.1 x altura) - 44.7 */
#include <stdio.h>

int main(void)
{
    char sexo;
    float altura;

    printf("Informe seu sexo [M/F]: ");
    scanf("%c", &sexo);
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Seu peso ideal e: ");

    if (sexo == 'M' || sexo == 'm')
        printf("%.2fkg", 72.7 * altura - 58);
    else
        printf("%.2fkg", 62.1 * altura - 44.7);
    return (0);
}