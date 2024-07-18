#include <iostream>

using namespace std;

int main() {
    double a, b, xp, xk;
    cout << "Podaj wspolczynnik a: ";
    cin >> a;

    cout << "Podaj wspolczynnik b: ";
    cin >> b;

    cout << "Podaj poczatek przedzialu: ";
    cin >> xp;

    cout << "Podaj koniec przedzialu: ";
    cin >> xk;
    for (double x = xp; x <= xk; x++) {
        double y = a * x + b;
        cout << "Dla x = " << x << ", y = " << y << endl;
    }

    return 0;
}
