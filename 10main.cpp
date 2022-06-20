/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 10)Escreva um programa em C++ que receba do usuário dados de um PET (nome do animal, espécie, raça, sexo, idade, nome do dono, rg do dono, telefone do dono). 
 * O programa deve solicitar os dados de N PETs e salvar os dados cadastrados em um arquivo.TXT.
 * 
 * Created on 14 de junho de 2022, 10:32
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

int main(int argc, char** argv) {
    int N;
    fstream arq;
    string linha;
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
    arq.open("arquivoPET.txt", ios::out | ios::app);
    if (arq.is_open()) {
        for (int i = 0; i < N; i++) {
            arq << "NOME DO PET: " << strPet[i].nome << endl;
            arq << "ESPÉCIE DO PET: " << strPet[i].especie << endl;
            arq << "RAÇA DO PET: " << strPet[i].raca << endl;
            arq << "SEXO DO PET: " << strPet[i].sexo << endl;
            arq << "IDADE DO PET: " << strPet[i].idade << endl;
            arq << "NOME DO DONO DO PET: " << strPet[i].dono << endl;
            arq << "RG: " << strPet[i].rg << endl;
            arq << "TELEFONE: " << strPet[i].tell << endl;
            arq << "" << endl;
            arq.close();
            arq.open("nomes.txt", ios::in);
            while (!arq.eof()) {
                getline(arq, linha);
                cout << linha << endl;
            }
        }
    }

    return 0;
}

