#include <iostream>
using namespace std;
int main()
{int n, liczba, suma = 0;
cout<<"podaj ilosc liczb do zsumowania";
cin>>n;
for(int i = 1; i<=n; i++)
{
	cout<<"podaj liczbe"<<i<<":";
	cin>>liczba;
	suma+=liczba;
}
cout<<"suma podanych liczb wynosi: "<<suma<<endl;
return 0;
}
