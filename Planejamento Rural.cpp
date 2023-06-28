#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Semente
{

    string nome;
    float preco;
    float renda;
    int qtd;
    float custoBeneficio;
    int comprado = 0;
};

bool compararMaior(Semente a, Semente b)
{
    return a.custoBeneficio < b.custoBeneficio;
}

int main()
{
    int entrada;
    bool algumaSementeComprada = false;
    cin >> entrada;

    vector<Semente> sementes(entrada);

    float dinheiro = 0;

    for (int i = 0; i < entrada; i++)
    {
        cin >> sementes[i].nome >> sementes[i].preco >> sementes[i].renda >> sementes[i].qtd;
        sementes[i].custoBeneficio = (sementes[i].renda / sementes[i].preco) - 1;
    }

    cin >> dinheiro;

    stable_sort(sementes.begin(), sementes.end(), compararMaior);

    for (int i = entrada - 1; i >= 0; i--)
    {
        while (dinheiro >= sementes[i].preco and sementes[i].qtd > 0)
        {
            sementes[i].comprado += 1;
            sementes[i].qtd -= 1;
            dinheiro -= sementes[i].preco;
            algumaSementeComprada = true;
        }
    }

    if (algumaSementeComprada)
    {
        for (int i = entrada - 1; i >= 0; i--)
        {
            if (sementes[i].comprado > 0)
            {
                cout << sementes[i].nome << " " << sementes[i].comprado << endl;
            }
        }
    }

    else
    {
        cout << "Melhor jogar outro jogo...";
    }
}