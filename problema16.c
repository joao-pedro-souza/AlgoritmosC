/* A prefeitura de uma cidade está coletando informações sobre o salário e o número de filhos dos habitantes. A leitura
de dados é realizada até que seja informado o valor -1 para o salário. Apresente a média de salário da população, a média
de filhos e o maior salário. */
#include <stdio.h>

int main(void)
{
    int c;
    float salario, soma_salario, media_salario, maior_salario, filhos, soma_filhos, media_filhos;
    c = 0;
    printf("Salario: ");
    scanf("%f", &salario);
    while (salario != -1) 
    {
        c++;
        if (salario > maior_salario)
        {
            maior_salario = salario;
        }
        soma_salario += salario;
        
        printf("Numero de filhos: ");
        scanf("%f", &filhos);
        soma_filhos += filhos;
        printf("Salario: ");
        scanf("%f", &salario);

    }
    media_salario = soma_salario / c;
    media_filhos = soma_filhos / c;
    printf("Media de Salario: %.2f\n", media_salario);
    printf("Media de Filhos: %.f\n", media_filhos);
    printf("Maior Salario: %.2f\n", maior_salario);
    return (0);
}