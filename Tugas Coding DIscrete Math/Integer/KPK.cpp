#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"Number A : ";
	cin>>a;
	cout<<"Number B : ";
	cin>>b;
	int temp=a;
	while(temp%b!=0){
		temp+=a;
	}
	cout<<"KPK : "<<temp;
}
            

	