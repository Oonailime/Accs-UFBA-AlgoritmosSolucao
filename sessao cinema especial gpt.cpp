#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Filme {
    int ano;
    string nome;
    string categoria;
    string horario;
};

int main() {
    int n;
    cin >> n;

    vector <Filme> filmes(n);

    for (int i = 0; i < n; i++) {
        cin >> filmes[i].ano >> ws;
        getline(cin, filmes[i].nome);
        getline(cin, filmes[i].categoria);
        getline(cin, filmes[i].horario);
    }

    string consulta;
    getline(cin, consulta);

    bool encontrou = false;

    if (consulta[0] >= '0' && consulta[1] <= '9') {
        // O cliente consultou filmes de um determinado ano
        int ano_consulta = stoi(consulta);
        cout << ano_consulta << endl<< endl;

        for (const Filme& f : filmes) {
            if (f.ano == ano_consulta) {
                encontrou = true;
                cout << f.nome << endl;
                cout << f.categoria << endl;
                cout << f.horario << endl<< endl ;
            }
        }
    } else {
        // O cliente consultou filmes de uma determinada categoria
        cout << consulta << endl<< endl;

        for (const Filme& f : filmes) {
            if (f.categoria == consulta) {
                encontrou = true;
                cout << f.ano << endl;
                cout << f.nome << endl;
                cout << f.horario << endl<< endl;
            }
        }
    }

    if (!encontrou) {
        cout << "Sem filmes nessa consulta" << endl;
    }

    
}