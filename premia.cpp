#include <iostream>
using namespace std;
int main()
{ float pensja;
bool premia;
cout<<"wpisz pensje pracownika"<<endl;
cin>>pensja;
cout<<"Czy ma premie do wyplaty. Napisz "<<endl;
cout<<" 0 - gdy nie ma"<<endl;
cout<<" 1 - gdy jest"<<endl;
cin>>premia;
if(premia == 0) {
cout<<" obecna pensja bez premii wynosi "<<pensja<<endl; 
}
else {
cout<<" obecna pensja z premia wynosi "<<pensja*1.2<<endl;
}
return 0; }
