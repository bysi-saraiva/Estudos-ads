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

int main() {
    int idade;

    cout << "Qual é sua idade? ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Maior de idade" endl;
    } else {
        cout << "Menor de idade";
    }

    return 0;
}