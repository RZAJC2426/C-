#include <iostream>
using namespace std;
int main()
{ float cena;
cout<<"podaj cene"<<endl;
cin>>cena;
bool rabat=(cena>100);
if(rabat==true)
cout<<"cena towaru wynosi: "<<cena<<endl;
cout<<"rabat wynosi 10%: "<<endl;
cout<<"cena z rabatem wynosi: "<<cena*1.1<<endl;
else
cout<<"cena towaru wynosi: "<<cena<<endl;
return 0;
}
