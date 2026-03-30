#include <iostream>
using namespace std;

int main() {
    string nome;
    float renda;
    float gastos;
    float percentual;
    float sobra;   

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite sua renda: ";
    cin >> renda;

    if (renda <= 0) {
        cout << "Renda invalida";
        return 0;
    }

    cout << "Digite seus gastos: ";
    cin >> gastos;

    percentual = (gastos / renda) * 100;
    sobra = renda - gastos;

    cout << "Percentual: " << percentual << "%" << endl;
    cout << "Sobra: " << sobra << endl;

    cout << nome << ", sua situacao financeira: ";

    if (percentual <= 60) {
        cout << "Saudavel";
    }
    else if (percentual <= 90) {
        cout << "Alerta";
    }
    else {
        cout << "Risco";
    }

    return 0;
}