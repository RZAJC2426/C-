#include <iostream>

using namespace std;

int main()
{
    int n, factorial = 1;

    cout << "Podaj liczbe: ";
    cin >> n;

    if (n < 0) {
        cout << "Silnia nie istnieje dla liczb ujemnych." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Silnia z " << n << " wynosi " << factorial << "." << endl;

    return 0;
}
