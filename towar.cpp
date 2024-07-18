#include <iostream>
using namespace std;
int main()
{
    float cena;
    int ilosc;
    cout<<"podaj cene"<<endl;
    cin>>cena;
    cout<<"podaj ilosc towaru"<<endl;
    cin>>ilosc;
    if (cena<=200)
    cout<<"ostateczna cena"<<(cena*1.1)*ilosc<<endl;
    else if (cena>=200)
    cout<<"ostateczna cena"<<(cena*1.15)*ilosc<<endl;
    return 0;

}
