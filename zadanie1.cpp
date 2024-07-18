#include <iostream>
using namespace std;
int main()
{int liczba;
    do {
        std::cout << "Podaj liczbe dodatnia: ";
        std::cin >> liczba;
    } while (liczba <= 0);
    std::cout << "Podana liczba dodatnia to: " << liczba << std::endl;
    return 0;
}
