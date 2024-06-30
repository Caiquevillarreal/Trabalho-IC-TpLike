using System;

class Program
{
    // Função que verifica se é possível atender todos os pedidos de camisetas
    static char VerificarCamisetas(int N, int[] tamanhosPreferidos, int P, int M)
    {
        int pedidosPequeno = 0;  // Contador para pedidos de tamanho pequeno
        int pedidosMedio = 0;    // Contador para pedidos de tamanho médio

        // Contar os pedidos de cada tamanho
        foreach (int tamanho in tamanhosPreferidos)
        {
            if (tamanho == 1)
            {
                pedidosPequeno++;
            }
            else if (tamanho == 2)
            {
                pedidosMedio++;
            }
        }

        // Verificar se há camisetas suficientes de cada tamanho
        if (pedidosPequeno <= P && pedidosMedio <= M)
        {
            return 'S';  // Sim, todos os pedidos podem ser atendidos
        }
        else
        {
            return 'N';  // Não, algum pedido não pode ser atendido
        }
    }

    static void Main()
    {
        int N = int.Parse(Console.ReadLine());  // Número de premiados
        int[] tamanhosPreferidos = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);  // Lista dos tamanhos preferidos
        int P = int.Parse(Console.ReadLine());  // Quantidade de camisetas pequenas disponíveis
        int M = int.Parse(Console.ReadLine());  // Quantidade de camisetas médias disponíveis

        // Verificação e exibição do resultado
        char resultado = VerificarCamisetas(N, tamanhosPreferidos, P, M);
        Console.WriteLine(resultado);
    }
}
