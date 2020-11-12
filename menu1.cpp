#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

int main()
{

    int op = 0, deveRetornar;

    do
    {

        printf("### SISTEMA DE MENU MOLDE ####\n");
        printf("1 - CALCULADORA\n");
        printf("2 - DATA NASCIMENTO\n");
        printf("3 - opcao 3\n");
        printf("0 - sair\n");
        scanf("%d", &op);
        system("clear");

        if (op == 1)
        {
            do
            {
                printf("### Calcular a área de um retângulo ####\n\n\n");
                printf("Favor entrar com as informações solicitada abaixo: \n");

                float largura, comprimento, area;

                printf("LARGURA = ");
                scanf("%f", &largura);

                printf("COMPRIMENTO = ");
                scanf("%f", &comprimento);

                area = largura * comprimento;

                printf("AREA = %f m2 \n\n\n", area);
                do
                {
                    printf("Digite 0 para voltar ao menu...\n");
                    printf("Digite 1 para calcular novamente\n");
                    scanf("clear");
                    scanf("%d", &deveRetornar);

                    if (deveRetornar != 0 && deveRetornar != 1)
                    {
                        printf("Valor invalido\n\n");
                    }
                } while (deveRetornar != 0 && deveRetornar != 1) ;
            } while (deveRetornar != 0);
        }
        else if (op == 2)
        {
            printf("### DATA NASCIMENTO ####\n\n\n\n");

            printf("digite 0 para voltar ao menu...");
            scanf("%u", &op);
        }
        else if (op == 3)
        {
            printf("### ESTÁ NO OPÇÃO 3 ####\n\n\n\n");

            printf("digite 0 para voltar ao menu...");
            scanf("%u", &op);
        }
        else if (op == 0)
        {
            printf("OBRIGADO POR TER USADO NOSSO SISTEMA.");
            scanf("%u", &op);
            exit(0);
        }
        else
        {
            printf("Voce digitou uma opcao invalida!!!!!!\n\n\n");
            printf("digite algo para voltar ao menu...");
            scanf("%u", &op);
        }

    } while (op != 3);

    return 0;
}