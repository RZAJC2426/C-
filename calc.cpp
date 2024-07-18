#include <iostream>
using namespace std;
int main()
{ char wybor;
int a;
int b;
cout<<"HAUPTMENU"<<endl;
cout<<"......................."<<endl;
cout<<"+ - DODAWANIE"<<endl;
cout<<"- - ODEJMOWANIE"<<endl;
cout<<"* MNOZENIE"<<endl;
cout<<"/ DZIELENIE"<<endl;
cout<<"aby moc obliczyc, wybierz jedna z powyzszych opcji ";
cin>>wybor;

switch (wybor)
{

{case '+':
	cout<<"wybrales dodawanie"<<endl;
	cout<<"podaj pierwsza liczbe"<<endl;
	cin>>a;
	cout<<"podaj druga liczbe"<<endl;
	cin>>b;
	cout<<"wynik dodawania to: "<<a+b<<endl;
}
break;
case '-':
	{
	cout<<"wybrales odejmowanie"<<endl;
	cout<<"podaj pierwsza liczbe"<<endl;
	cin>>a;
	cout<<"podaj druga liczbe"<<endl;
	cin>>b;
	cout<<"wynik odejmowania to: "<<a-b<<endl;
}
break;

case '*':
	{
	cout<<"wybrales mnozenie"<<endl;
		cout<<"podaj pierwsza liczbe"<<endl;
	cin>>a;
	cout<<"podaj druga liczbe"<<endl;
	cin>>b;
	cout<<"wynik mnozenia to: "<<a*b<<endl;
}
break;

case '/':
	{
	cout<<"wybrales dzielenie"<<endl;
	cout<<"podaj pierwsza liczbe"<<endl;
	cin>>a;
	cout<<"podaj druga liczbe"<<endl;
	cin>>b;
	if(b==0)
	cout<<"nie dzielimy przez 0! Hej! "<<endl;
	else
	cout<<"wynik dzielenia to: "<<a/b<<endl;
}
break;
}
return 0;}

	
