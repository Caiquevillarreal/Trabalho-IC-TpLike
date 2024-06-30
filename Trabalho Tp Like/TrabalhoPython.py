def verificar_camisetas(N, tamanhos_preferidos, P, M):
    pedidos_pequeno = 0
    pedidos_medio = 0

    # Conta quantos pedidos são de tamanho pequeno e médio
    for tamanho in tamanhos_preferidos:
        if tamanho == 1:
            pedidos_pequeno += 1
        elif tamanho == 2:
            pedidos_medio += 1

    # Verifica se há camisetas suficientes para todos os pedidos
    if pedidos_pequeno <= P and pedidos_medio <= M:
        return 'S'  # Todos serão atendidos com o tamanho escolhido
    else:
        return 'N'  # Nem todos serão atendidos com o tamanho escolhido

def main():
    print("Digite o número de premiados:")
    N = int(input())  # Número de premiados

    print("Digite os tamanhos preferidos (1 para pequeno, 2 para médio):")
    tamanhos_preferidos = list(map(int, input().split()))  # Tamanhos preferidos pelos premiados

    print("Digite a quantidade de camisetas pequenas produzidas:")
    P = int(input())  # Quantidade de camisetas pequenas produzidas

    print("Digite a quantidade de camisetas médias produzidas:")
    M = int(input())  # Quantidade de camisetas médias produzidas

    # Chamada da função para verificar se todos serão atendidos com o tamanho escolhido
    resultado = verificar_camisetas(N, tamanhos_preferidos, P, M)

    # Impressão do resultado
    print("Resultado:", resultado)

if __name__ == "__main__":
    main()
