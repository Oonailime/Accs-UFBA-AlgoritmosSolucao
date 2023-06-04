#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int entrada;
    string frase;
    cin >> entrada;
    cin.ignore();
    getline(cin,frase);
    for(int i=entrada;i>0;i--){
        cout << i<<". "<< frase<<endl;
    }
}