#include <iostream>
using namespace std;

int MaiorSoma(int mat[100][100], int m, int n) {
    int maiorSoma = 0;
    int indiceSoma = 0;

    for (int i = 0; i < m; ++i) {
        int somaLinha = 0;
        for (int j = 0; j < n; ++j) {
            somaLinha += mat[i][j];
        }
        cout << "Soma da linha " << i << ": " << somaLinha << endl;
        if (somaLinha > maiorSoma) {
            maiorSoma = somaLinha;
            indiceSoma = i;
        }
    }
    return indiceSoma;
}

int main() {
    int mat[100][100];
    int m, n;

    cout << "Digite o número de linhas (até 100): ";
    cin >> m;
    cout << "Digite o número de colunas (até 100): ";
    cin >> n;

    cout << "Digite os valores da matriz:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }

    int indiceSoma = MaiorSoma(mat, m, n);
    cout << "Índice da linha com maior soma: " << indiceSoma << endl;

    return 0;
}
