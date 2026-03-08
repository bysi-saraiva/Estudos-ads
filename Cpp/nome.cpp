#include <iostream>
#include <string>
using namespace std;

int main () {
      string nome
      int idade;
cout<< "Qual o seu nome?"<<endl;
cin>> nome;
cout<<"Qual a sua idade?"<<endl;
cin>> idade;
if (idade >= 18) {
cout<<nome<<", você é maior de idade"<<endl;
} 
else { cout<<nome<<", você é menor de idade"<<endl;
}

return 0;
}

#include <iostream>
using namespace std;
     int main () {
      int nota;
      cout<<"Digite sua nota:";
      cin>>nota

if (nota >= 7) {
    cout << "Aprovado";
} 
else if (nota >= 5 && nota < 7) {
    cout << "Recuperação";
} 
else {
    cout << "Reprovação";
}
#include <iostream>
using namespace std;
     int main () {
      int nota;
      cout<<"Digite sua nota:";
      cin>>nota
      
if (nota >= 7) {
    cout << "Aprovado";
} 
else if (nota >= 5 && nota < 7) {
    cout << "Recuperação";
} 
else {
    cout << "Reprovação";
}

#include <iostream>
using namespace std;

int main() {

    string nome;
    int idade;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << nome << " voce eh maior de idade";
    }
    else {
        cout << nome << " voce eh menor de idade";
    }

    return 0;
}