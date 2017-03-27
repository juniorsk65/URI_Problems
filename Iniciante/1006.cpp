#include <iostream>

using namespace std;

int main()
{

    double A, B, C, MEDIA;

    cin.precision(1);
    cin >> fixed >> A;
    cin >> fixed >> B;
    cin >> fixed >> C;

    MEDIA = ((A*2)+(B*3)+(C*5))/10;
    cout.precision(1);
    cout << "MEDIA = " << fixed << MEDIA << endl;

    return 0;
}
