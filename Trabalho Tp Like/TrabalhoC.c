#include <stdio.h>

// Função que verifica se todos os premiados podem receber camisetas do tamanho escolhido
char verificar_camisetas(int tamanho_preferido, int P, int M) {
    // Verifica se há camisetas suficientes para o tamanho preferido
    if (tamanho_preferido == 1 && P > 0) {
        return 'S';  // Todos serão atendidos com o tamanho pequeno
    } else if (tamanho_preferido == 2 && M > 0) {
        return 'S';  // Todos serão atendidos com o tamanho médio
    } else {
        return 'N';  // Nem todos serão atendidos com o tamanho escolhido
    }
}

int main() {
    int N, P, M;  // Declaração das variáveis para número de premiados, camisetas pequenas e médias
    printf("Digite o número de premiados:\n");
    scanf("%d", &N);  // Leitura do número de premiados

    int tamanho_preferido;  // Declaração da variável para tamanho preferido

    // Verifica se o usuário deseja digitar um único tamanho preferido ou todos os tamanhos
    if (N == 1) {
        printf("Digite o tamanho preferido (1 para pequeno, 2 para médio):\n");
        scanf("%d", &tamanho_preferido);  // Leitura do único tamanho preferido
    } else {
        int tamanhos_preferidos[N];  // Declaração do array para os tamanhos preferidos
        printf("Digite os tamanhos preferidos (1 para pequeno, 2 para médio):\n");
        for (int i = 0; i < N; i++) {
            scanf("%d", &tamanhos_preferidos[i]);  // Leitura dos tamanhos preferidos
        }
        tamanho_preferido = tamanhos_preferidos[0];  // Considera apenas o primeiro tamanho para a verificação
    }

    printf("Digite a quantidade de camisetas pequenas produzidas:\n");
    scanf("%d", &P);  // Leitura da quantidade de camisetas pequenas produzidas

    printf("Digite a quantidade de camisetas médias produzidas:\n");
    scanf("%d", &M);  // Leitura da quantidade de camisetas médias produzidas

    // Chamada da função para verificar se todos serão atendidos com o tamanho escolhido
    char resultado = verificar_camisetas(tamanho_preferido, P, M);

    // Impressão do resultado
    printf("Resultado: %c\n", resultado);

    return 0;
}
