#include <iostream>

int main() {
    int n, suma = 0, ilosc = 0;
    std::cout << "Podaj liczby, 0 konczy wprowadzanie: ";
    std::cin >> n;

    while (n != 0) {
        suma += n;
        ilosc++;
        std::cin >> n;
    }

    if (ilosc != 0) {
        double srednia = static_cast<double>(suma) / ilosc;
        std::cout << "Srednia: " << srednia << std::endl;
    } else {
        std::cout << "Nie podano liczb do obliczenia sredniej." << std::endl;
    }

    return 0;
}
