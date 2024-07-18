#include <iostream>
using namespace std;
int main()
{int x, y, suma =0;
cout<<"Podaj x:"<<endl;
cin>>x;
cout<<"Podaj y:"<<endl;
cin>>y;
for(int i=x;i<=y;i++){
	if(i%2==1){
		suma +=i;
	}
}
cout<<"suma liczb nieparzystych z przedzia³u wynosi "<<x<<","<<y<<">wynosi:"
<<suma<<endl;
return 0;
}

