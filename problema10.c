/* Faça um programa que informe a quantidade total de calorias a partir da escolha do usuário, 
que deve informar o prato típico e a bebida. A tabela de calorias encontra-se a seguir:
Prato                 |  Bebida
Italiano 750 cal      |  Chá 30 cal
Japonês 324 cal       |  Suco de laranha 80 cal
Salvadorenho 545 cal  |  Refrigerante 90 cal */ 
#include <stdio.h>

int main(void)
{
    
    int prato, bebida;
    int total = 0;
    printf("Escolha um prato:\nItaliano [1]\nJapones [2]\nSalvadorenho [3]\n");
    scanf("%d", &prato);
    printf("Escolha uma bebida:\nCha [1]\nSuco de laranja [2]\nRefrigerante[3]\n");
    scanf("%d", &bebida);

    switch(prato)
    {
    case 1: total += 750;
        break;
    case 2: total += 324;
        break;
    case 3: total += 545;
        break;
    }

    switch (bebida)
    {
    case 1: total += 30;
        break;
    case 2: total += 80;
        break;
    case 3: total += 90;
        break;
    }

    printf("O total de calorias e de: %d", total);
    return (0);
}