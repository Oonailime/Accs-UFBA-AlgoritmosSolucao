#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Atleta
{
    string nome;
    int peso;
    string categoria;
};

string determinarCategoria(int peso)
{
    if (peso <= 44)
    {
        return "Super-ligeiro";
    }
    else if (peso <= 48)
    {
        return "Ligeiro";
    }
    else if (peso <= 52)
    {
        return "Meio-leve";
    }
    else if (peso <= 57)
    {
        return "Leve";
    }
    else if (peso <= 63)
    {
        return "Meio-medio";
    }
    else if (peso <= 70)
    {
        return "Medio";
    }
    else if (peso <= 78)
    {
        return "Meio-pesado";
    }
    else
    {
        return "Pesado";
    }
}

void ordenarAtletas(vector<Atleta> &atletas)
{
    int n = atletas.size();
    for (int i = 0; i < n - 1; i++)
    {
        int menorPesoIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (atletas[j].peso < atletas[menorPesoIdx].peso)
            {
                menorPesoIdx = j;
            }
        }
        if (menorPesoIdx != i)
        {
            swap(atletas[i], atletas[menorPesoIdx]);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<Atleta> atletas(n);

    for (int i = 0; i < n; i++)
    {
        cin >> atletas[i].nome >> atletas[i].peso;
    }

    ordenarAtletas(atletas);

    for (auto &atleta : atletas)
    {
        atleta.categoria = determinarCategoria(atleta.peso);
        cout << atleta.nome << " " << atleta.categoria << endl;
    }

    return 0;
}