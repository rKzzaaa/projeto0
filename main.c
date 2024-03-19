#include <stdio.h>

int main(){
    int opcao;
    do {
        printf("\nMenu principal\n");
        printf("1 - Criar tarefa \n");
        printf("2 - Deletar tarefa\n");
        printf("3 - Listar tarefas\n");
        printf("0 - sair\n");
        printf("Entrar com uma opcao\n");
        int i = scanf("%d\n",&opcao);
        printf("Opcao escolhida: %d\n", opcao);
    } while(opcao != 0);
}

