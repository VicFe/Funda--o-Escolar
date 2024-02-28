#include <stdlib.h>
#include <stdio.h>
#include <string.h> // Importando bibliotecas

int main(void)
{                         // main = raiz do programa e void = retorna vazio
    char continuar = 's'; // char = o mesmo que string, armazena texto

    while (continuar == 's' || continuar == 'S')
    {
        char nome[20];
        int escolha; // int = número inteiro, armeza número de 4 bytes

        printf("Qual comando você deseja usar? (1 (Calculadora), 2 (Perguntas) ou 3 (Vida)): ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            char operacao[2];
            double resultado, n1, n2;
            printf("Digite o primeiro número: \n");
            scanf("%lf", &n1);
            printf("Digite o segundo número: \n");
            scanf("%lf", &n2);
            printf("Digite a operação que deseja: \n");
            scanf("%s", operacao);

            if (strcmp(operacao, "+") == 0)
            {
                resultado = n1 + n2;
                printf("O resultado da soma é: %.2lf\n", resultado);
            }
            else if (strcmp(operacao, "-") == 0)
            {
                resultado = n1 - n2;
                printf("O resultado da subtração é: %.2lf\n", resultado);
            }
            else if (strcmp(operacao, "*") == 0)
            {
                resultado = n1 * n2;
                printf("O resultado da multiplicação é: %.2lf\n", resultado);
            }
            else if (strcmp(operacao, "/") == 0)
            {
                if (n2 != 0)
                {
                    resultado = n1 / n2;
                    printf("O resultado da divisão é: %.2lf\n", resultado);
                }
                else
                {
                    printf("Divisão por zero não é permitida.\n");
                }
            }
            else
            {
                printf("Operação inválida.\n");
            }
            break;

        case 2:
            printf("Qual o seu nome?\n"); // imprime uma mensagem no terminal
            scanf("%s", nome);            // scanf = escaneia oque a pessoa digitou, %s = ler uma string, nome = variavel que criamos para armazenar o texto
            printf("Olá, %s! Como você está?\n", nome);
            break;

        case 3:
            int tamanho_inicial, tamanho_final;
            int anos = 0;

            printf("Tamanho inicial: ");
            scanf("%d", &tamanho_inicial);

            printf("Tamanho final: ");
            scanf("%d", &tamanho_final);

            while (tamanho_inicial < tamanho_final)
            {
                int nascimentos = tamanho_inicial / 3;
                int mortes = tamanho_inicial / 4;

                tamanho_inicial += (nascimentos - mortes);
                anos++;
            }

            printf("Anos: %d\n", anos);

        default:
            printf("Valor invalido!\n");
        }
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar); // O espaço antes de '%c' é importante para limpar o buffer de entrada

        // Se o usuário digitar 'n' ou 'N', o loop termina
    }
    printf("Programa encerrado.\n");

    return 0;
}