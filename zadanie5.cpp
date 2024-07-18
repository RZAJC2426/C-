#include <iostream>
#include <cmath>
using namespace std;
int main()
{ int n;
cout <<"podaj liczbe naturalna n: "<<endl;
cin>>n;
if(n<=0){
	cout <<"liczba n musi byc wieksza od 0"<<endl;
	return 1;
}
cout << "Pierwsze " << n << " poteg liczby 2 to:" <<endl;
for (int i=0;i<n;i++ ) {
	cout<<pow(2,i)<<endl;
}
return 0;
}
