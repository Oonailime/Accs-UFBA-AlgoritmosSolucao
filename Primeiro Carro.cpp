#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int meses,alcancou=0;
    double valCelta,caixinha=0,valCaixinha=0,saida=0;
    cin >> meses >> valCelta;
    for(int i = 0; i<meses;i++){
        cin >> valCaixinha;
        caixinha+=valCaixinha;
        if(caixinha>=valCelta and alcancou==0){
            saida=  i+1;
            alcancou = 1;
        }
    }
    if(alcancou){
        cout <<saida << " " << fixed<< setprecision(2)<< caixinha-valCelta;
    }
    else{
        
            cout << "0 "<< fixed<< setprecision(2)<< caixinha;
    }

}