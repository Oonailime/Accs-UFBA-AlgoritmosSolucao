#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int entrada = 0;
    cin >> entrada;
    while (entrada != 0) {
        if (isPrime(entrada)) {
            cout << "O numero de cadeiras eh primo!" << endl;
        } else {
            cout << "O numero de cadeiras nao eh primo!" << endl;
        }
        cin >> entrada;
    }
    return 0;
}