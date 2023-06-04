#include <iostream>
using namespace std;

int main()
{


    int quantdpessoas;
    int qtdvagas;

    string entrada;

    cin >> quantdpessoas;

    while (entrada!="FIM") {
        cin>>entrada;
    if (entrada == "Casal") 
        qtdvagas+=2;
    if (entrada == "Triplo") 
        qtdvagas+=3;
    if (entrada == "Quadruplo") 
        qtdvagas+=4;
    if (entrada == "Familia") 
        qtdvagas+=5;
  }

    if (quantdpessoas <= qtdvagas)
        cout << "Pode reservar! Esses quartos cabem todos.";
    else
        cout << "Procure outra pousada.";
    return 0;
}