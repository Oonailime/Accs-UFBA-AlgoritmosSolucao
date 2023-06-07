#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Atleta {
    string nome;
    int peso;
    string categoria;
};

bool compararPorPeso(Atleta& a, Atleta& b) {
    return a.peso < b.peso;
}

string determinarCategoria(int peso) {
    if (peso <= 44) {
        return "Super-ligeiro";
    } else if (peso <= 48) {
        return "Ligeiro";
    } else if (peso <= 52) {
        return "Meio-leve";
    } else if (peso <= 57) {
        return "Leve";
    } else if (peso <= 63) {
        return "Meio-medio";
    } else if (peso <= 70) {
        return "Medio";
    } else if (peso <= 78) {
        return "Meio-pesado";
    } else {
        return "Pesado";
    }
}

int main() {
    int n;
    cin >> n;

    vector<Atleta> atletas(n);

    for (int i = 0; i < n; i++) {
        cin >> atletas[i].nome >> atletas[i].peso;
    }

    sort(atletas.begin(), atletas.end(), compararPorPeso);

    for (int i=0;i<n;i++) {
        atletas[i].categoria = determinarCategoria(atletas[i].peso);
        cout << atletas[i].nome << " " << atletas[i].categoria << endl;
    }

    return 0;
}