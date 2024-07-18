#include <iostream>
#include <locale.h>
using namespace std;
int main()
{ setlocale(LC_CTYPE,"Polish");
    int PIN=2789;
float stan;
int wybor;
float kwota;

cout<<"Witaj w aplikacji bankowej IKO "<<endl;
cout<<"Podaj PIN: "<<endl;
cin>>PIN;
if(PIN!=2789) {
cout<<"Niepoprawny PIN"<<endl;
}
else

cout<<"Gratulacje! Zostales poprawnie zalogowany do IKO"<<endl;
cout<<"Aby dokonać operacji, wybierz jedną z dostępnych opcji"<<endl;
cout<<" 0 - stan konta"<<endl;
cout<<" 1 - wpłata gotówki"<<endl;
cout<<" 2 - wypłata gotówki"<<endl;
cin>>wybor;
{

switch(wybor){
    {case 0:
    cout<<"stan konta wynosi "<<stan<<" PLN"<<endl;
 
    }
    break;
    case 1:
    cout<<"podaj kwotę wpłaty"<<endl;
    cin>>kwota;
    cout<<"stan konta wynosi "<<stan+kwota<<" PLN"<<endl;
    break;
    case 2:
    cout<<"podaj kwotę wypłaty"<<endl;
    cin>>kwota;
    cout<<"stan konta wynosi "<<stan-kwota<<endl;
    break;


}
for(;;)
}
return 0;
}
