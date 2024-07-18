#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Podaj liczbe naturalna n: ";
    cin >> n;
    cout << "Kwadraty liczb naturalnych mniejszych od " << n << " to: ";
    for (int i = 1; i*i < n; i++) {
        cout << i*i << " ";
    }
    return 0;
}
