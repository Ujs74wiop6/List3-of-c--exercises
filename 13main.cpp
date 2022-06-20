/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 13)Escrever um programa em C++ para calcular o IMC de N pessoas. Para cada pessoa deverá 
 * ser solicitado o nome, peso e altura. (utilize função e struct para fazer o programa). 
 * IMC = peso / altura2. Além de mostrar os dados na tela, o programa também deverá 
 * armazenar o IMC de cada pessoa em um arquivo.txt.
 * 
 * Created on 14 de junho de 2022, 10:33
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <valarray>

using namespace std;

imc(float peso, float altura) {
    float imc;
    imc = (peso / (altura * altura));
    return imc;
}

int main(int argc, char** argv) {
    float peso, altura;
    int N;
    fstream arq;
    string linha;
    cout << "Programa para calcular o IMC de uma pessoa" << endl;
    cout << "Quantos IMC's você vai calcular? ";
    cin >> N;

    struct estruturaImc {
        string nome;
        int x;
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
        strIMC[i].x = imc(peso, altura);
        cout << " ";
    }
    arq.open("arquivoIMC.txt", ios::out | ios::app);
    if (arq.is_open()) {
        arq << "Programa para calcular o IMC de uma pessoa" << endl;
        for (int i = 0; i < N; i++) {
            arq << "O IMC do cliente " << strIMC[i].nome << " é: " << strIMC[i].x << endl;
        }
    }
    return 0;
}


