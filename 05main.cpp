/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 5)Escreva um programa em C++  que seja capaz de criar um vetor contendo os seguintes números, 
 * nessa ordem: 10,9,8,7,6,5,4,3,2,1. Exiba o vetor e também a ordem inversa desse vetor.
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
    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Os valores do vetor são: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[" << vetor1[i] << "]";
    }
    cout << " " << endl;
    cout << "Os valores do vetor na ordem inversa são: " << endl;
    for (int i = 9; i >= 0; i--) {
        cout << "[" << vetor1[i] << "]";
    }
    return 0;
}

