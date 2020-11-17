#include <stdio.h>

int main(void){

    float largura, comprimento, area;

    printf("LARGURA = ");
    scanf("%f", &largura);

    printf("COMPRIMENTO = ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("AREA = %f m2 \n", area);
    
    return 0;
}