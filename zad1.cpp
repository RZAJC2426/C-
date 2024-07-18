#include <iostream>
using namespace std;
int main() {
   int a, b;
   cout << "Podaj a: ";
   cin >> a;
   cout << "Podaj b: ";
   cin >> b;

cout << "Liczby od " << a << " do " << b << " w porz¹dku rosn¹cym: ";
   for (int i = a; i <= b; i++) {
      cout << i << " ";
   }
   cout << endl << "Liczby od " << b << " do " << a << " w porz¹dku malej¹cym: ";
   for (int i = b; i >= a; i--) {
      cout << i << " ";
   }

   return 0;
}
