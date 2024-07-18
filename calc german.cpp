#include <iostream>
using namespace std;
int main()
{ 
char wybor;
int a;
int b;
cout<<"HAUPTMENU"<<endl;
cout<<"......................."<<endl;
cout<<"+ - ZUSATZ"<<endl;
cout<<"- - SUBTRAKTION"<<endl;
cout<<"* MULTIPLIKATION"<<endl;
cout<<"/ AUFTEILUNG"<<endl;
cout<<"um rechnen zu konnen, wahlen Sie eine der oben genannten Optionen ";
cin>>wybor;

switch (wybor)
{

{case '+':
	cout<<"Du hast ZUSATZ gew�hlt  "<<endl;
	cout<<"geben Sie erste Zahl "<<endl;
	cin>>a;
	cout<<"geben Sie zweite Zahl"<<endl;
	cin>>b;
	cout<<"der ZUSATZ Eregbnise ist: "<<a+b<<endl;
}
break;
case '-':
	
	cout<<"wahlen sie subtraktion"<<endl;
	cout<<"geben Sie erste Zahl"<<endl;
	cin>>a;
	cout<<"geben Sie zweite Zahl"<<endl;
	cin>>b;
	cout<<"der SUBTRAKTION Eregbnise ist: "<<a-b<<endl;

break;

case '*':
	
	cout<<"wahlen sie multiplikation"<<endl;
	cout<<"geben Sie erste Zahl"<<endl;
	cin>>a;
	cout<<"geben Sie zweite Zahl"<<endl;
	cin>>b;
	cout<<"der MULTIPLIKATION Eregbnise ist: "<<a*b<<endl;

break;

case '/':
	
	cout<<"wahlen sie AUFTEILEN"<<endl;
	cout<<"geben Sie erste Zahl"<<endl;
	cin>>a;
	cout<<"geben Sie zweite Zahl"<<endl;
	cin>>b;
	if(b==0)
	cout<<"Kein teilen durch 0 auf! Hallo! "<<endl;
	else
	cout<<"der AUFTEILEN Eregbnise ist: "<<a/b<<endl;

break;}

return 0;}

	
