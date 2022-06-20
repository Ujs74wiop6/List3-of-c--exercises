/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 4)Escreva um programa em C++  para armazenar notas das P1 e P2 de 15 alunos (2 vetores). 
 * Calcular a média e armazenar em outro vetor. 
 * Verificar também a situação do aluno (Aprovado ou Reprovado). 
 * Imprimir as notas, a média e situação de cada aluno.
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
    float vetor1[15], vetor2[15], vetormedia[15];
    for (int i = 1; i <= 15; i++) {
        cout << " Aluno - " << i << " nota da (P1): ";
        cin >> vetor1[i];
        cout << " Aluno - " << i << " nota da (P2): ";
        cin >> vetor2[i];
        cout << " " << endl;
    }
    cout << " " << endl;
    for (int i = 1; i <= 15; i++) {
        vetormedia[i] = (vetor1[i] + vetor2[i]) / 2;
    }
    for (int i = 1; i <= 15; i++) {
        cout << "Aluno: " << i << ":" << endl;
        cout << "Notas (P1 e P2): (" << vetor1[i] << ", " << vetor2[i] << ")" << endl;
        cout << "Média: " << vetormedia[i] << endl;
        if (vetormedia[i] <= 6) {
            cout << "Situaçã: REPROVADO" << endl;
        } else {
            cout << "Situação: APROVADO" << endl;
        }
    }
    return 0;
}

