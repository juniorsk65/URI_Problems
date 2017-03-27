#include <iostream>
//Alem do metodo abaixo, tambem é possivel utilizar a função setprecision()
//que consta na biblioteca <iomanip>

using namespace std;

int main() {

    using namespace std;
    double raio, pi = 3.14159;
    double area;

    cin >>  raio;
    area = pi*(raio*raio);

    cout.precision(4); //Definindo a quantidade de casas decimais utilizada
    cout << "A=" << fixed << area << endl; //fixed = escrever valores de ponto flutuante em notação de ponto fixo.
                                           // fixed faz parte de std::
    return 0;
}
