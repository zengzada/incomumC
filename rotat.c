#include <stdio.h>
#include <string.h>

// Estrutura para armazenar informações sobre linguagens de programação e sistemas
struct Info {
    char nome[100];
    char descricao[500];
};

// Função para exibir informações sobre uma linguagem ou sistema
void exibirInformacoes(struct Info informacoes[], int tamanho, const char nome[]) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (strcmp(informacoes[i].nome, nome) == 0) {
            printf("Nome: %s\n", informacoes[i].nome);
            printf("Descrição: %s\n", informacoes[i].descricao);
            return;
        }
    }
    printf("Informações sobre %s não encontradas.\n", nome);
}

int main() {
    // Informações sobre linguagens de programação e sistemas
    struct Info linguagens[] = {
        {"C", "Linguagem de programação de propósito geral."},
        {"Python", "Linguagem de programação de alto nível e fácil leitura."},
        {"Java", "Linguagem de programação orientada a objetos."},
        {"JavaScript", "Linguagem de programação utilizada principalmente para desenvolvimento web."},
    };

    struct Info sistemas[] = {
        {"Windows", "Sistema operacional desenvolvido pela Microsoft."},
        {"Linux", "Sistema operacional de código aberto baseado em Unix."},
        {"macOS", "Sistema operacional desenvolvido pela Apple para seus computadores Mac."},
    };

    char escolha[100];
    printf("Escolha uma linguagem de programação ou sistema para obter informações:\n");
    printf("1. C\n");
    printf("2. Python\n");
    printf("3. Java\n");
    printf("4. JavaScript\n");
    printf("5. Windows\n");
    printf("6. Linux\n");
    printf("7. macOS\n");

    printf("Digite o nome: ");
    scanf("%s", escolha);

    // Converter a entrada do usuário para letras minúsculas (caso insensível)
    for (int i = 0; i < strlen(escolha); i++) {
        escolha[i] = tolower(escolha[i]);
    }

    // Verificar se a escolha é uma linguagem ou sistema e exibir informações apropriadas
    exibirInformacoes(linguagens, sizeof(linguagens) / sizeof(linguagens[0]), escolha);
    exibirInformacoes(sistemas, sizeof(sistemas) / sizeof(sistemas[0]), escolha);

    return 0;
}
