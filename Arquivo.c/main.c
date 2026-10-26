/* Cadastro de equipamentos do laboratorio de informatica
   Os dados ficam salvos no arquivo equipamentos.txt */

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], codigo[50], local[100], linha[300];
    int opcao, total, c;
    FILE *arq;

    do {
        printf("\n=== LABORATORIO DE INFORMATICA ===\n");
        printf("1 - Cadastrar equipamento\n");
        printf("2 - Listar equipamentos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            opcao = -1;   /* digitou letra: opcao invalida */
        }
        while ((c = getchar()) != '\n' && c != EOF);   /* limpa o enter do teclado */

        if (opcao == 1) {
            printf("\nNome do equipamento: ");
            fgets(nome, sizeof(nome), stdin);
            printf("Codigo de identificacao: ");
            fgets(codigo, sizeof(codigo), stdin);
            printf("Localizacao: ");
            fgets(local, sizeof(local), stdin);

            /* o fgets guarda o enter junto, entao tiramos ele da string */
            nome[strcspn(nome, "\n")] = '\0';
            codigo[strcspn(codigo, "\n")] = '\0';
            local[strcspn(local, "\n")] = '\0';

            /* "a" = append: cria o arquivo se nao existir e
               mantem os cadastros antigos, gravando no final */
            arq = fopen("equipamentos.txt", "a");
            if (arq == NULL) {
                printf("Erro ao abrir o arquivo!\n");
            } else {
                fprintf(arq, "Nome: %s | Codigo: %s | Local: %s\n", nome, codigo, local);
                fclose(arq);
                printf("Equipamento cadastrado com sucesso!\n");
            }
        } else if (opcao == 2) {
            /* "r" = leitura: se o arquivo nao existe, ainda nao ha cadastros */
            arq = fopen("equipamentos.txt", "r");
            if (arq == NULL) {
                printf("\nNenhum equipamento cadastrado ainda.\n");
            } else {
                printf("\n--- EQUIPAMENTOS CADASTRADOS ---\n");
                total = 0;
                while (fgets(linha, sizeof(linha), arq) != NULL) {
                    total++;
                    printf("%d) %s", total, linha);
                }
                fclose(arq);
                printf("Total: %d equipamento(s).\n", total);
            }
        } else if (opcao == 0) {
            printf("Encerrando o programa...\n");
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}