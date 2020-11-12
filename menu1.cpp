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

        if (op == 1)
        {
            do
            {
                system("clear");
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
                    scanf("%d", &deveRetornar);

                    if (deveRetornar != 0 && deveRetornar != 1)
                    {
                        printf("Valor invalido");
                    }
                } while (deveRetornar != 0 && deveRetornar != 1) ;
            } while (deveRetornar != 0);
        }
        else if (op == 2)
        {
            system("clear");
            printf("### DATA NASCIMENTO ####\n\n\n\n");

            printf("digite 0 para voltar ao menu...");
            scanf("%u", &op);
        }
        else if (op == 3)
        {
            system("clear");
            printf("### ESTÁ NO OPÇÃO 3 ####\n\n\n\n");

            printf("digite 0 para voltar ao menu...");
            scanf("%u", &op);
        }
        else if (op == 0)
        {
            system("clear");
            printf("OBRIGADO POR TER USADO NOSSO SISTEMA.");
            scanf("%u", &op);
            exit(0);
        }
        else
        {
            system("clear");
            printf("Voce digitou uma opcao invalida!!!!!!\n\n\n");
            printf("digite algo para voltar ao menu...");
            scanf("%u", &op);
        }

    } while (op != 3);

    return 0;
}