#include <iostream>
#include <vector>

using namespace std;

// Verifica se eh primo
bool isPrime(int num){
    if (num < 2){
        return false;
    }

    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) return false;
    }

    return true;
}

int josephus(int num) {
    // Cria um vetor para armazenar as pessoas
    vector<int> people(num);
    for (int i = 0; i < num; i++) {
        people[i] = i + 1;
    }

    // Define a variavel m inicial como 2
    int m = 2;

    // Indice para percorrer o vetor de pessoas
    int index = 0;

    while (people.size() > 1) {
        // Calcula o proximo numero primo
        while (!isPrime(m)) {
            m++;
        }

        // Encontra a proxima pessoa a ser eliminada
        index = (index + m - 1) % people.size();

        // Remove a pessoa do vetor
        people.erase(people.begin() + index);

        // Atualiza o valor de m para o proximo primo
        m++;
    }

    // Retorna a posicao da pessoa que sera salva
    return people[0];
}

int main() {
    int n;

    while (true) {
        // Le o valor de n
        cin >> n;

        if (n == 0) {
            break;
        }

        // Chama a funcao josephus e imprime o resultado
        int result = josephus(n);
        cout << result << endl;
    }

    return 0;
}
