/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 11)Escrever um programa em C++ para calcular o IMC de uma pessoa 
 * (utilize função para fazer o programa). IMC = peso / altura2.
 * 
 * Created on 14 de junho de 2022, 10:32
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

imc(float peso, float altura) {
    float imc;
    imc = peso / (altura * altura);
    return imc;
}

int main(int argc, char** argv) {
    float peso, altura;
    cout << "Programa para calcular o IMC de uma pessoa" << endl;
    cout << " " << endl;
    cout << "Digite seu o peso: ";
    cin >> peso;
    cout << "Digite a sua altura: ";
    cin >> altura;
    cout << " " << endl;
    cout << "O IMC é: " << imc(peso, altura) << endl;
    return 0;
}

