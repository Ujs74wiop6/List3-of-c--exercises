/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 8)Escreva um programa em C++ que receba do usuário números reais e preencha uma matriz 4x5. 
 * Gere e armazene em uma outra matriz a metade da primeira 
 * (a metade de cada número armazenado na matriz original). Imprima as duas matrizes.
 * 
 * Created on 14 de junho de 2022, 10:32
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
    float vetor[4][5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Informe o [" << i + 1 << ", " << j + 1 << "] valor para o vetor: ";
            cin >> vetor[i][j];
        }
    }
    cout << "Os valores da Matriz são:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (vetor[i][j] < 10) {
                cout << "[0" << vetor[i][j] << "]";
            } else {
                cout << "[" << vetor[i][j] << "]";
            }
        }
        cout << endl;
    }
    cout << "A matriz com valores resultantes:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "[" << vetor[i][j] / 2 << "]";
        }
        cout << endl;
    }
    return 0;
}
