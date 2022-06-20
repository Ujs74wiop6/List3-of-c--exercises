/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 12)Escrever um programa em C++ para calcular o IMC de N pessoas. 
 * Para cada pessoa deverá ser solicitado o nome, peso e altura. 
 * (utilize função e struct para fazer o programa). IMC = peso / altura2.
 * 
 * Created on 14 de junho de 2022, 10:33
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

imc(float peso, float altura) {
    float imc;
    imc = (peso / (altura * altura));
    return imc;
}

int main(int argc, char** argv) {
    float peso, altura;
    int N;
    cout << "Programa para calcular o IMC de uma pessoa" << endl;
    cout << "Quantos IMC's você vai calcular? ";
    cin >> N;

    struct estruturaImc {
        string nome;
    } strIMC[N];

    for (int i = 0; i < N; i++) {
        cout << " " << endl;
        cout << "DIGITE O NOME DO CLIENTE: ";
        cin >> strIMC[i].nome;
        cout << "DIGITE O PESO DO CLIENTE: ";
        cin >> peso;
        cout << "DIGITE O ALTURA DO CLIENTE: ";
        cin >> altura;
        cout << "O IMC é: " << imc(peso, altura) << endl;
        cout << " ";
    }
    return 0;
}

