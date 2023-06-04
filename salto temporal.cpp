#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Evento {
    int data;
    string local;
};

int main() {
    int N;
    cin >> N;
    
    vector<Evento> eventos(N);
    
    for (int i = 0; i < N; i++) {
        cin >> eventos[i].data >> eventos[i].local;
    }
    
    int M;
    cin >> M;
    
    for (int i = 0; i < M; i++) {
        int tentativaData;
        cin >> tentativaData;
        
        bool encontrado = false;
        string local = "";
        
        for (int j = 0; j < N; j++) {
            if (tentativaData == eventos[j].data) {
                encontrado = true;
                local = eventos[j].local;
                break;
            }
            
            if (tentativaData < eventos[j].data) {
                if (j > 0) {
                    encontrado = true;
                    local = eventos[j-1].local;
                }
                break;
            }
        }
        
        if (encontrado) {
            if (local == "dallas") {
                cout << "Salto temporal realizado" << endl;
                cout << "O mundo foi salvo" << endl;
            } else {
                cout << "Salto temporal realizado" << endl;
                cout << "Ops. local errado" << endl;
            }
        } else {
            cout << "Fim do mundo" << endl;
        }
    }
    
    return 0;
}