/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * Created on 14 de junho de 2022, 08:10
 * 
 * 1)Escreva um programa em C++ para armazenar 10 números em um vetor. 
 * Imprima os números do vetor. Calcule e imprima a soma desses números.
 * 
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
    int vetor[10];
    int soma;
    for (int i = 1; i <= 10; i++) {
        cout << "Informe o " << i << "° valor do vetor: ";
        cin >> vetor[i];
        soma += vetor[i];
    }
    cout << "Os valore do vetor são: " << endl;
    for (int i = 1; i <= 10; i++) {
        cout << vetor[i] << " - ";
    }
    cout << "\n A soma dos valore do vetor são: " << soma << endl;
    return 0;
}

