#include <iostream>

using namespace std;

int main() {

    using namespace std;
    double raio, pi = 3.14159;
    double area;

    cin >>  raio;
    area = pi*(raio*raio);

    cout.precision(4);
    cout << "A=" << fixed << area << endl;
    return 0;
}
