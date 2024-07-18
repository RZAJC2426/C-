#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{ srand(time(0));
int liczba = rand()% 100+1;
int liczba_prob = 0;
int odpowiedz;
cout  <<"Zgadnij liczbe z zakresu od 1 do 100: ";
while (liczba_prob<5)
{ cin >> odpowiedz;
liczba_prob++;
if (odpowiedz==liczba)
{
	cout<<"Brawo, zgadles liczbe po "<<liczba_prob<<" probach!"<<endl;
	return 0;
}
else if (odpowiedz<liczba)
{
	cout<<"Szukana wartosc jest wieksza."<<endl;
	
}
else
{cout<<"Szukana wartosc jest mniejsza."<<endl;
}
}
cout<<"Niestety, nie udalo sie odgadnac liczby po "<<liczba_prob<<" probach."<<endl;
return 0; 
}
