#include <iostream>
using namespace std;
int main()
{ int a,b;
cout<<"podaj pierwsza liczbe"<<endl;
cin>>a;
cout<<"podaj druga liczbe"<<endl;
cin>>b;
if(a<b)
cout<<"liczba "<<b<<" jest wieksza od "<<a<<endl;
else
if(a>b)
cout<<"liczba "<<a<<" jest wieksza od "<<b<<endl;
else
cout<<"liczba "<<a<<" jest rowna "<<b<<endl;
return 0;
}
