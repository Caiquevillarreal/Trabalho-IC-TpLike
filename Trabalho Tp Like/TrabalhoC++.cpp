#include <iostream>
#include <vector>

using namespace std;

// Função que verifica se todos os premiados podem receber camisetas do tamanho escolhido
char verificar_camisetas(vector<int> tamanhos_preferidos, int P, int M) {
    int pedidos_pequeno = 0;
    int pedidos_medio = 0;

    // Conta quantos pedidos são de tamanho pequeno e médio
    for (int tamanho : tamanhos_preferidos) {
        if (tamanho == 1)
            pedidos_pequeno++;
        else if (tamanho == 2)
            pedidos_medio++;
    }

    // Verifica se há camisetas suficientes para todos os pedidos
    if (pedidos_pequeno <= P && pedidos_medio <= M)
        return 'S';  // Todos serão atendidos com o tamanho escolhido
    else
        return 'N';  // Nem todos serão atendidos com o tamanho escolhido
}

int main() {
    int N, P, M;  // Declaração das variáveis para número de premiados, camisetas pequenas e médias
    cout << "Digite o número de premiados:" << endl;
    cin >> N;  // Leitura do número de premiados

    vector<int> tamanhos_preferidos(N);  // Declaração do vetor para os tamanhos preferidos
    cout << "Digite os tamanhos preferidos (1 para pequeno, 2 para médio):" << endl;
    for (int i = 0; i < N; i++) {
        cin >> tamanhos_preferidos[i];  // Leitura dos tamanhos preferidos
    }

    cout << "Digite a quantidade de camisetas pequenas produzidas:" << endl;
    cin >> P;  // Leitura da quantidade de camisetas pequenas produzidas

    cout << "Digite a quantidade de camisetas médias produzidas:" << endl;
    cin >> M;  // Leitura da quantidade de camisetas médias produzidas

    // Chamada da função para verificar se todos serão atendidos com o tamanho escolhido
    char resultado = verificar_camisetas(tamanhos_preferidos, P, M);

    // Impressão do resultado
    cout << "Resultado: " << resultado << endl;

    return 0;
}
