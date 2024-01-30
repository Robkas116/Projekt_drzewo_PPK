#ifndef FUNKCJE_H
#define FUNKCJE_H
#include<string>
#include<vector>

typedef std::vector<std::vector<double>> Matrix;
typedef std::vector<double> Vector;
typedef std::vector<std::string> Vector1;
typedef std::vector<std::vector<std::string>> String_Matrix;

struct node {
    double numer;
    std::string argument;
    std::string znak;
    double wartosc;
    std::string tak;
    std::string nie;
};

void ShowMatrix(const Matrix& m);
Matrix LoadMatrix(const std::string& fileName);
std::vector<std::string> lista(const std::string& fileName);
void SaveToFile(const std::string& fileName, const String_Matrix& sm);
std::vector<node> drzewo1(const std::string& fileName);
void funkcja_srodkowa(double numer, std::vector<double> rzad, std::vector<std::string> list,
    std::vector<node> v, String_Matrix& etykiety);
String_Matrix wywolanie_drzewa(std::vector<node> v, Matrix m, std::vector<std::string> list);






#endif
