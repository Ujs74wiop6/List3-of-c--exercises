/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * Created on 14 de junho de 2022, 10:30
 * 
 * 2) Escreva um programa em C++  para armazenar 8 números em um vetor e imprimir todos os números. 
 * Verifique quantos desses números são múltiplos de 3. Imprima essa quantidade.
 * 
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int vetor[8];
    int mult;
    for (int i = 1; i <= 8; i++) {
        cout << "Informe o " << i << "° valor do vetor: ";
        cin >> vetor[i];
        if ((vetor[i] % 3) == 0) {
            mult += 1;
        }
    }
    cout << "Os valore do vetor são: " << endl;
    for (int i = 1; i <= 8; i++) {
        cout << vetor[i] << " - ";
    }
    cout << "\n Nesse vetor possui " << mult << " multiplos de 3. " << endl;
    return 0;
}

