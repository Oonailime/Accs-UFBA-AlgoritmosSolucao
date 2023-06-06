#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int p;
    cin >> p;   
    float kill = 0, death = 0;

    for(int i=0; i<p; i++){
        int aux;
        cin >> aux;
        kill += aux;
        cin >> aux;
        death += aux;
    }

    double kdAlberto = kill / death;

    kill = 0;
    death = 0;

    for(int i=0; i<p; i++){
        int aux;
        cin >> aux;
        kill += aux;
        cin >> aux;
        death += aux;
    }

    double kdBruno = kill / death;
    if(kdAlberto > kdBruno){
        cout << "Parabens Alberto!" << endl;
        cout << fixed << setprecision(2);
        cout << kdAlberto << endl;
    } else if(kdAlberto < kdBruno){
        cout << "Parabens Bruno!" << endl;
        cout << fixed << setprecision(2);
        cout << kdBruno << endl;
    } else cout << "Empate" << endl;
}