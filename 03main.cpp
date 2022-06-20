/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * Created on 14 de junho de 2022, 10:31
 * 
 * 3)Escreva um programa em C++ para receber números para preencher dois vetores de tamanho 10. 
 * Imprima os vetores. Faça a multiplicação de um por outro e imprima o resultado da multiplicação.
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
    int vetor1[10], vetor2[10], vetorsoma[10];

    for (int i = 1; i <= 10; i++) {
        cout << "Informe o " << i << "° valor do vetor (1): ";
        cin >> vetor1[i];
    }
    cout << " " << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "Informe o " << i << "° valor do vetor (2): ";
        cin >> vetor2[i];
    }
    for (int i = 1; i <= 10; i++) {
        vetorsoma[i] = vetor1[i] * vetor2[i];
    }
    cout << " " << endl;
    cout << " Vetor(A)" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "[" << vetor1[i] << "]";
    }
    cout << " " << endl;
    cout << " Vetor(B)" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "[" << vetor2[i] << "]";
    }
    cout << " " << endl;
    cout << " A Multiplicação dos vetores:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "[" << vetorsoma[i] << "]";
    }

    return 0;
}

