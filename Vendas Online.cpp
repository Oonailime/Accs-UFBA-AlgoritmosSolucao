#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int entrada, mult;
    float soma=0;
    float preco;
    cin >> entrada;
    for(int i=0;i<entrada;i++){
        cin >> mult >> preco;
        soma += mult*preco;
    }
    cout<<fixed<<setprecision(2) << soma;


    
}