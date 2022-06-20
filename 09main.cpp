/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 9)Escreva um programa em C++ que receba do usuário dados de um PET 
 * (nome do animal, espécie, raça, sexo, idade, nome do dono, rg do dono, telefone do dono). 
 * O programa deve solicitar os dados de N PETs. Mostre na tela todos os cadastros.
 * 
 * *Prof eu não conseguir fazer por CHAR, ele pulava a as pergunta, fico estranho então fiz com string
 * 
 * Created on 14 de junho de 2022, 10:32
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <iomanip>
#include <string>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
    int N;
    cout << "Quantos animais você vai cadastrar? ";
    cin >> N;

    struct estruturaPet {
        string nome;
        string dono;
        string especie;
        string raca;
        string sexo;
        string tell;
        string rg;
        int idade;
    } strPet[N];

    for (int i = 0; i < N; i++) {
        cout << "INFORME O NOME DO PET: ";
        cin >> strPet[i].nome;
        cout << "INFORME A ESPÉCIE DO PET: ";
        cin >> strPet[i].especie;
        cout << "INFORME A RAÇA DO PET: ";
        cin >> strPet[i].raca;
        cout << "INFORME O SEXO DO PET: ";
        cin >> strPet[i].sexo;
        cout << "INFORME O NOME DO DONO DO PET: ";
        cin >> strPet[i].dono;
        cout << "INFORME O RG DO DONO DO PET: ";
        cin >> strPet[i].rg;
        cout << "INFORME O TELEFONE DO DONO DO PET: ";
        cin >> strPet[i].tell;
        cout << "INFORME A IDADE DO PET: ";
        cin >> strPet[i].idade;
        cout << endl;
        //getchar();
    }
    cout << "Cliente cadastrado com sucesso!" << endl;
    cout << "" << endl;
    for (int i = 0; i < N; i++) {
        cout << "NOME DO PET: " << strPet[i].nome << endl;
        cout << "ESPÉCIE DO PET: " << strPet[i].especie << endl;
        cout << "RAÇA DO PET: " << strPet[i].raca << endl;
        cout << "SEXO DO PET: " << strPet[i].sexo << endl;
        cout << "IDADE DO PET: " << strPet[i].idade << endl;
        cout << "NOME DO DONO DO PET: " << strPet[i].dono << endl;
        cout << "RG: " << strPet[i].rg << endl;
        cout << "TELEFONE: " << strPet[i].tell << endl;
        cout << "" << endl;
    }
    return 0;
}

