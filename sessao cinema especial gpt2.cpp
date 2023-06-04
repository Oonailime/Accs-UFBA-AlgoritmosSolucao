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
    vector<Filme> filmes(n);
    
    // Leitura dos dados dos filmes
    for (int i = 0; i < n; i++) {
        cin >> filmes[i].ano;
        cin.ignore();
        getline(cin, filmes[i].nome);
        getline(cin, filmes[i].categoria);
        getline(cin, filmes[i].horario);
    }
    
    // Leitura da consulta do cliente
    string consulta;
    getline(cin, consulta);
    
    // Busca pelos filmes correspondentes à consulta
    vector<Filme> resultados;
    for (int i = 0; i < n; i++) {
        if (consulta == to_string(filmes[i].ano) ||
            consulta == filmes[i].categoria) {
            resultados.push_back(filmes[i]);
        }
    }
    
    // Impressão dos resultados ou mensagem de "Sem filmes nessa consulta"
    if (resultados.size() == 0) {
        cout << "Sem filmes nessa consulta" << endl;
    } else {
        if (consulta[0] >= '0' && consulta[0] <= '9') {
            // A consulta é por ano
            cout << consulta << endl << endl;
            for (int i = 0; i < resultados.size(); i++) {
                cout << resultados[i].nome << endl;
                cout << resultados[i].categoria << endl;
                cout << resultados[i].horario << endl << endl;
            }
        } else {
            // A consulta é por categoria
            cout << consulta << endl << endl;
            for (int i = 0; i < resultados.size(); i++) {
                cout << resultados[i].ano << endl;
                cout << resultados[i].nome << endl;
                cout << resultados[i].horario << endl << endl;
            }
        }
    }
    
    return 0;
}