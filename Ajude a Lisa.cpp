#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct PaiAluno
{
    string nome;
    int matricula;
    int telefone;
};


int buscaPorMatricula(vector<PaiAluno>& pais ,int quantidade)
{
    int Matricula;
    for (int i = 0; i < quantidade; i++)
    {
        cin >> Matricula;

        //busca binaria de Matricula em pais[mid].matricula


    }
}
bool compararPorMatricula(const PaiAluno& pai1, const PaiAluno& pai2) {
    return pai1.matricula < pai2.matricula;
}

int main()
{
    int entrada;
    cin >> entrada;
    vector<PaiAluno> pais(entrada);

    for (int i = 0; i < entrada; i++)
    {
        cin >> pais[i].matricula >> pais[i].telefone >> pais[i].nome;
    }
    sort(pais.begin(),pais.end(),compararPorMatricula);

    int NBuscas;
    cin >> NBuscas;
    buscaPorMatricula(pais,NBuscas);
}