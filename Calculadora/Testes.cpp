#include <iostream>
using namespace std;
  
int main() {
    int idade;
    cout<<"Qual a sua idade?";
    cin>>idade;
    cout<<"Sua idade é:"<<idade<<endl;

    return 0;
}
#include <iostream>
using namespace std;

int main () {
    int idade;

    cout << "Qual é sua idade? ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Maior de idade" << endl;
    } else {
        cout << "Menor de idade"; << endl;
    }

    return 0;
}

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