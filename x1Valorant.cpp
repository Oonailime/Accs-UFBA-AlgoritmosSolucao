#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Pessoa {
    int kill;
    int death;
};



int main() {
    int entrada;
    cin >> entrada;
    vector<Pessoa>alberto(entrada);
    float kdalberto=0;
    float kalberto=0;
    float dalberto=0;
    vector<Pessoa>bruno(entrada);
    float kdbruno=0;
    float kbruno=0;
    float dbruno=0;


    for(int i=0;i<entrada;i++){
        cin >> alberto[i].kill>>alberto[i].death;
        kalberto += alberto[i].kill;
        dalberto += alberto[i].death;
    }
    for(int i=0;i<entrada;i++){
        cin >> bruno[i].kill>>bruno[i].death;
        kbruno += bruno[i].kill;
        dbruno += bruno[i].death;
    }

    kdalberto = kalberto/dalberto;
    kdbruno = kbruno/dbruno;
    
    if(kdalberto==kdbruno){
        cout << "Empate"<<endl;
    }
    else if(kdalberto>kdbruno){
        cout <<fixed<<setprecision(2)<< "Parabens Alberto!"<< endl<< kdalberto;
        
    }
    else{
        cout <<fixed<<setprecision(2)<< "Parabens Bruno!"<< endl<< kdbruno;
    }
    
}