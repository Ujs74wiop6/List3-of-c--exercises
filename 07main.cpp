/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 7)Escreva um programa em C++ que receba números e os armazene em uma matriz 6X6. 
 * Imprima a matriz e depois imprima também a Diagonal Secundária.
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
    int vetor[6][6];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Informe o [" << i + 1 << ", " << j + 1 << "] valor para o vetor: ";
            cin >> vetor[i][j];
        }
    }
    cout << "Os valores da Matriz são:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (vetor[i][j] < 10) {
                cout << "[0" << vetor[i][j] << "]";
            } else {
                cout << "[" << vetor[i][j] << "]";
            }
        }
        cout << endl;
    }
    cout << "Os valores [SECUDÁRIOS] da Matriz são:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == 5 - j) {
                if (vetor[i][j] < 10) {
                    cout << "[0" << vetor[i][j] << "]";
                } else {
                    cout << "[" << vetor[i][j] << "]";
                }
            } else {
                cout << "[ ]";
            }
        }
        cout << endl;
    }
    return 0;
}


