#include <iostream>
using namespace std;

int main(){
    int aco, madeira, couro;

    cin >> aco >> madeira >> couro;

    aco = aco/2;
    madeira = madeira/3;
    couro = couro/5;

    if(aco<= madeira && aco<= couro){
        cout << aco;
    }
    else if(madeira<=aco && madeira <= couro){
        cout << madeira;
    }
    else if(couro<=aco && couro <= madeira){
        cout << couro;
    }








}