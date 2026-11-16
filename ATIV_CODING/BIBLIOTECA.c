#include <stdio.h>

#define MAX 100

int main() {
    int clientes[MAX];
    int livros[MAX];
    char datas[MAX][11];   // formato dd/mm/aaaa
    int total = 0;
    int opcao;
    int i;

    do {
        printf("\n===== SISTEMA DE BIBLIOTECA =====\n");

        if (total >= MAX) {
            printf("Limite de emprestimos atingido!\n");
            break;
        }

        printf("\n--- Cadastro de emprestimo ---\n");

        printf("Codigo do cliente: ");
        scanf("%d", &clientes[total]);

        printf("Codigo do livro: ");
        scanf("%d", &livros[total]);

        printf("Data de entrega (dd/mm/aaaa): ");
        scanf("%10s", datas[total]);

        printf("\nEmprestimo cadastrado!\n");

        printf("\n--- Dados do emprestimo ---\n");
        printf("Cliente: %d\n", clientes[total]);
        printf("Livro: %d\n", livros[total]);
        printf("Data de entrega: %s\n", datas[total]);

        total++;

        printf("\nDeseja cadastrar outro emprestimo? (1) Sim (0) Nao: ");
        scanf("%d", &opcao);

    } while (opcao == 1);

    printf("\n===== EMPRESTIMOS REGISTRADOS =====\n");
    for (i = 0; i < total; i++) {
        printf("%d) Cliente: %d | Livro: %d | Entrega: %s\n",
               i + 1, clientes[i], livros[i], datas[i]);
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}