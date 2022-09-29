#include <stdio.h>

int main(void) 
{
float nota, soma, media;
int cod, i, nnota, aprovados, reprovados;

aprovados = 0;
reprovados = 0;

printf("Informe o numero de notas da disciplina: ");
scanf("%d", &nnota);
printf("Digite o codigo do aluno: ");
scanf("%d", &cod);

while (cod != 0)
{
    soma = 0;
    for (i = 0; i < nnota; i++)
    {
        printf("Digite a %d nota: ", i+1);
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / nnota;
    if (media >= 6)
    {
        aprovados++;
    }
    else
    {
        reprovados++;
    }
    printf("Digite o codigo do aluno: ");
    scanf("%d", &cod);   
}
printf("Aprovados: %d\n", aprovados);
printf("Reprovados: %d\n", reprovados);
}

