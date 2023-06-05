#include <iostream>
using namespace std;

// Função para calcular o máximo divisor comum (MDC) utilizando o Algoritmo de Euclides
int mdc_euclides(int R, int V) {
    if (V == 0) {
        return R;
    }
    return mdc_euclides(V, R % V);
}

int main() {
    // Le o numero de casos de teste
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Le a quantidade de figurinhas de Ricardo e Vicente
        int R, V;
        cin >> R >> V;

        // Calcula o MDC entre as quant. de figurinhas
        int tamanho_max = mdc_euclides(R, V);

        // REsultado
        cout << tamanho_max << endl;
    }

    return 0;
}
