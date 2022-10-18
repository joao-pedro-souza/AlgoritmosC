/* Em uma avaliação de um produto, o cliente responde sua opinião (1 – satisfatório; 2 – indiferente; 
3 – insatisfatório). Faça um programa que leia idade e opinião e apresente: o número de clientes que responderam 
satisfatório, a média de idade dos clientes que opinaram como satisfatório, e o número de clientes que responderam 
insatisfatório. O programa se encerra quando for digitado o valor zero para idade. */
#include <stdio.h>

int main(void)
{
    int idade, soma_idade, opiniao;
    float media_idade;
    int c, satisfatorio, indiferente, insatisfatorio = 0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    while (idade != 0)
    {
        c++;
        soma_idade += idade;
        printf("Qual a sua avaliacao sobre o produto: \n (1) Satisfatorio \n (2) Indiferente \n (3) Insatisfatorio \n");
        scanf("%d", &opiniao);
        if (opiniao == 1)
        {
            satisfatorio++;
        }
        else {
            if (opiniao == 2)
            {
                indiferente++;
            }
            else {
                if (opiniao == 3)
                {
                    insatisfatorio++;
                }
            }
        }
        printf("Digite sua idade: ");
        scanf("%d", &idade);
    }
    media_idade = (float) soma_idade / (float) c;
    printf("Media de idade: %f \n", media_idade);
    printf("Quantidade de clientes satisfeitos: %d \n", satisfatorio);
    printf("Quantidade de clientes indiferentes: %d \n", indiferente);
    printf("Quantidade de clientes insatisfeitos: %d \n", insatisfatorio);
}