#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main ()
{
int random_number, guess, attempt = 0;
}
srand(time(NULL));
random_number =rand()%100+1;
cout<<"zgadnij liczbe z zakresu od 1 do 100: "; 
cin>>guess;
while(guess !=random_number)
{ 
	attempt++;
if (guess>random_number)
cout<<"Szukana wartosc jest mniejsza.\n";
else
cout<<"Szukana wartosc jest wieksza.\n";
cout<<"Zgadnij liczbe z zakresu od 1 do 100:";
cin>>guess;
}
attempt++;
cout << "Brawo! Odgadles liczbe po " << attempt << " probach.\n";

    return 0;}
