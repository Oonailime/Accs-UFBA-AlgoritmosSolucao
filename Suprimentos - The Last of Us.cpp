#include <iostream>
#include <vector>
using namespace std;

int main()
{ 
    int entrada,suprimento, soma=0;
    cin >> entrada;
    for(int i=0;i<entrada;i++){
        cin >> suprimento;
        soma+=suprimento;
    }
    cout << soma;


}