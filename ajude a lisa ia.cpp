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

bool compararPorMatricula(const PaiAluno& pai1, const PaiAluno& pai2)
{
    return pai1.matricula < pai2.matricula;
}

void buscaPorMatricula(const vector<PaiAluno>& pais, int quantidade)
{
    int matricula;

    for (int i = 0; i < quantidade; i++)
    {
        cin >> matricula;
        bool encontrado = false;  

        int low = 0;
        int high = pais.size() - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (pais[mid].matricula == matricula)
            {
                cout << pais[mid].nome << ": " << pais[mid].telefone << endl;
                encontrado = true;
                break;
            }
            else if (pais[mid].matricula < matricula)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (!encontrado)
        {
            cout << "Aluno nao encontrado" << endl;
        }
    }
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

    sort(pais.begin(), pais.end(), compararPorMatricula);

    int NBuscas;
    cin >> NBuscas;

    buscaPorMatricula(pais, NBuscas);

    return 0;
}
