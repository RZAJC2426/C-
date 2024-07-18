#include <iostream>
using namespace std;
int main()
{char wechseln;
cout<<"HAUPTMENU"<<endl;
cout<<"......................."<<endl;
cout<<"P - POLE"<<endl;
cout<<"G - DEUTSCHE"<<endl;
cout<<"A - OSTERREICHE"<<endl;
cout<<"N - NORWEGIEN"<<endl;
cout<<"um rechnen zu konnen, wahlen Sie eine der oben genannten Optionen "<<endl;
cin>>wechseln;
switch(wechseln)
{case'P':
{

cout<<"Stoch, Kubacki,Zyla, Wasek, Wolny"<<endl;

break;

case'G':


cout<<"Geiger, Eisenbichler, Wellinger, Schmid, Raimund"<<endl;

break;
case'A':


cout<<"Kraft, Tschofenig, Fettner, Hoerl, Hayboeck"<<endl;

break;

case'N':


cout<<"Granerud, Forfang, Johansson, Lindvik,Sundal "<<endl;
}
break;
}
return 0;}

