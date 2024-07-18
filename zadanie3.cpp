#include <iostream>
using namespace std;
int main()
{int k, x, y;
cout<<"podaj liczbe k";
cin>>k;
cout<<"podaj przedzial x,y"<<endl;
cout<<"x";
cin>>x;
cout<<"y";
cin>>y;
cout<< "Liczby podzielne przez " << k << " z przedzialu <" << x << "," << y << "> to:" <<endl;
for (int i = x; i <= y; i++) {
        if (i % k == 0) {
        	cout<<i<<endl;
        }
    }
return 0;}
