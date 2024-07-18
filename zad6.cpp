#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;

    cout << "Podaj liczbe x: ";
    cin >> x;

    cout << "Podaj liczbe y: ";
    cin >> y;

    double wynik = pow(x, y);

    cout << x << " do potegi " << y << " wynosi " << wynik << endl;

    return 0;
}
