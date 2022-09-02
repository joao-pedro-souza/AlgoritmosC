/* Elabore um programa que calcule a área de um trapézio. */
#include <stdio.h>

int main(void)
{
    float bmaior, bmenor, alt, area;

    printf("Informe o valor da base maior: ");
    scanf("%f", &bmaior);
    printf("Informe o valor da base menor: ");
    scanf("%f", &bmenor);
    printf("Informe o valor da altura: ");
    scanf("%f", &alt);
    
    area = ((bmaior + bmenor) * alt)/2;
    printf("A area do trapezio e: %.2f", area);
    return (0);
}