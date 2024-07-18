#include <iostream>
using namespace std;
int main()
{float cena;
char typ;
float podatek;
cout<<"wpisz cene towaru "<<endl;
cin>>cena;
cout<<"czy towar jest dla dzieci "<<endl;
cout<<" jesli tak - wpisz d "<<endl;
cout<<" jesli nie - wpisz n "<<endl;
cin>>typ;
if (cena < 200)
cout<<"podatek = 0, cena = "<<cena<<" nie dla dziecka"<<endl;

else
if(cena <= 1000)
	if (typ =='d')
		podatek = cena*(0.15-0.05);
		else 
		podatek = cena*0.15;
	else
		if(typ=='d')
		podatek = cena*(0.22-0.05);
		else
		podatek = cena*0.22;
cout <<"cena wynosi "<< cena+podatek<<endl;
cout<<"podatek = "<<podatek<<endl;
cout<<"typ"<<typ<<endl;
return 0;
}
