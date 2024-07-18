#include <iostream>
using namespace std;
int main()
{int n;
cout<<"podaj liczbe calkowita: "<<endl;
cin>>n;
if(n%2==1){

n--;} cout<<"liczby patrzyste od"<< n<<" do 0:"<<endl;
for(int i=n; i>=0; i -=2){
	cout<<i<<endl;
}
return 0;
}
