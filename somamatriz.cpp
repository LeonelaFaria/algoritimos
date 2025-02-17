#include <iostream>

using namespace std;

void ler_matriz(int matriz[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Digite o elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz[i][j];
        }
    }
}

void somar_matrizes(int matriz1[3][3], int matriz2[3][3], int matriz_soma[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void imprimir_matriz(int matriz[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int matriz_soma[3][3];

    cout << "Leitura da primeira matriz:\n";
    ler_matriz(matriz1);

    cout << "Leitura da segunda matriz:\n";
    ler_matriz(matriz2);

    somar_matrizes(matriz1, matriz2, matriz_soma);

    cout << "A soma das matrizes é:\n";
    imprimir_matriz(matriz_soma);

    return 0;
}
