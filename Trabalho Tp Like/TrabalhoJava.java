import java.util.Scanner;

public class VerificarCamisetas {

    // Função que verifica se todos os premiados podem receber camisetas do tamanho escolhido
    static char verificarCamisetas(int[] tamanhosPreferidos, int P, int M) {
        int pedidosPequeno = 0;
        int pedidosMedio = 0;

        // Conta quantos pedidos são de tamanho pequeno e médio
        for (int tamanho : tamanhosPreferidos) {
            if (tamanho == 1)
                pedidosPequeno++;
            else if (tamanho == 2)
                pedidosMedio++;
        }

        // Verifica se há camisetas suficientes para todos os pedidos
        if (pedidosPequeno <= P && pedidosMedio <= M)
            return 'S';  // Todos serão atendidos com o tamanho escolhido
        else
            return 'N';  // Nem todos serão atendidos com o tamanho escolhido
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Leitura de toda a entrada
        String input = scanner.nextLine();
        String[] inputs = input.split("\\s+");

        // Primeira entrada é o número de premiados
        int N = Integer.parseInt(inputs[0]);  // Número de premiados

        // Array para os tamanhos preferidos
        int[] tamanhosPreferidos = new int[N];
        for (int i = 0; i < N; i++) {
            tamanhosPreferidos[i] = Integer.parseInt(inputs[i + 1]);  // Tamanhos preferidos pelos premiados
        }

        // Últimas entradas são a quantidade de camisetas
        int P = Integer.parseInt(inputs[N + 1]);  // Quantidade de camisetas pequenas produzidas
        int M = Integer.parseInt(inputs[N + 2]);  // Quantidade de camisetas médias produzidas

        // Chamada da função para verificar se todos serão atendidos com o tamanho escolhido
        char resultado = verificarCamisetas(tamanhosPreferidos, P, M);

        // Impressão do resultado
        System.out.println("Resultado: " + resultado);

        scanner.close();
    }
}
