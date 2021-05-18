#include <iostream>

using namespace std;

int main()
{
    double media = 0, numero, cont = 0, pares = 0;
    while (cont < 6){
        cin >> numero;
        if (numero > 0){
            media = media + numero;
            pares++;
        }
        cont++;
    }
    cout << pares << " valores positivos" <<endl;
    media = media / pares;
    cout.precision(1);
    cout << fixed << media <<endl;
    return 0;
}
