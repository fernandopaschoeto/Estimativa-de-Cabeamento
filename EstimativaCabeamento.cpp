/*#include < iostream >
#include < locale >
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
...
}
*/

#include <iostream>
#include <locale>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "ptb");
    float totalCabo, lanceLongo, lanceCurto, peDireito, numPontos;
    totalCabo = 0;
    lanceLongo = 0;
    lanceCurto = 0;
    peDireito = 0;
    numPontos = 0;
    cout << "Informe o lance mais longo: ";
    cin >> lanceLongo;
    cout << "Informe o lance mais curto: ";
    cin >> lanceCurto;
    cout << "Informe o pé direito: ";
    cin >> peDireito;
    cout << "Informe o número de pontos: ";
    cin >> numPontos;
    totalCabo =  ((lanceLongo + lanceCurto + 4 * peDireito)/2) * numPontos * 1.10;
    cout << "Você irá gastar para esse projeto " << totalCabo << "m² de cabo." << endl;

    //system ("pause");

    return 0;
}
