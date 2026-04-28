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

#include <iostream>
using namespace std;

int main() {
    string nome;
    float valorCompra;
    float valorFinal;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite o valor da compra: ";
    cin >> valorCompra;

    if (valorCompra <= 100) {
        valorFinal = valorCompra;
    }
    else if (valorCompra <= 300) {
        valorFinal = valorCompra - (valorCompra * 0.10);
    }
    else {
        valorFinal = valorCompra - (valorCompra * 0.20);
    }

    cout << "Cliente: " << nome << endl;
    cout << "Valor original: " << valorCompra << endl;
    cout << "Valor final: " << valorFinal << endl;

    return 0;
}