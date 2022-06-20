/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 6)Escreva um programa em C++ que receba números e os 
 * armazene em uma matriz 4X4. Imprima a matriz.
 * 
 * Created on 14 de junho de 2022, 10:31
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
    int vetor[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Informe o [" << i + 1 << ", " << j + 1 << "] valor para o vetor: ";
            cin >> vetor[i][j];
        }
    }
    cout << "Os valores da Matriz são:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (vetor[i][j] < 10) {
                cout << "[0" << vetor[i][j] << "]";
            } else {
                cout << "[" << vetor[i][j] << "]";
            }
        }
        cout << endl;
    }
    return 0;
}


