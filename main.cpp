#include<iostream>
#include<map>


#include "funkcje.h"




int main(int argv, char* argc[]) {
    std::map<std::string, std::string> mapa;
    for (int i = 1; i < argv; i = i + 2) {
        mapa[argc[i]] = argc[i + 1];
    }
    std::vector<node> drzewo = drzewo1(mapa["-t"]);
    Matrix dane = LoadMatrix(mapa["-i"]);
    std::vector<std::string> naglowki = lista(mapa["-i"]);
    SaveToFile(mapa["-o"], wywolanie_drzewa(drzewo, dane, naglowki));
}