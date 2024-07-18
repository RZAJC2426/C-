#include <iostream>
using namespace std;
int main(){
	int liczba, suma = 0;
	do {
		cout<<"Podaj liczbe dodatnia: ";
		cin>>liczba;
		if(liczba>0){
			suma +=liczba;
		}
	} while (liczba>0);
	cout<<"Suma wprowadzonych liczb dodatnich to:"<<suma<<endl;
	return 0;
}
