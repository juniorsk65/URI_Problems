#include <iostream>
 
using namespace std;
 
int main() {
    
    int NUMBER, HORAS;
    double SALARY;

    cin >> NUMBER;
    cin >> HORAS;
    cin >> SALARY;

    SALARY = SALARY*HORAS;

    cout.precision(2);
    cout << "NUMBER = " << NUMBER << endl;
    cout << "SALARY = U$ " << fixed << SALARY << endl;

    return 0;
}