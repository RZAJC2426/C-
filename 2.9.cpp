#include <iostream>
using namespace std;

int main()
{
	int liczba;
	cout<<"Podaj liczbe"<<endl;
	cin>>liczba;
	cout<<"dzielniki liczby to:"<<liczba<<" : "<<endl;
	for(int i = 1; i<=liczba;i++)
	if(liczba % i==0)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
