#include <iostream>
using namespace std;

void text(){
	cout<<" Do you want repeat the program again? (y/n) : ";
}
 
int main(){
	int Fnum, Snum, Mod;
	char repeat;
	do{
		cout<<"\n Program Highest Common Factor (HCF)"<<endl;
		cout<<" Enter the first number   : ";cin>>Fnum;
        cout<<" Enter the second number  : ";cin>>Snum;
        Mod=Fnum%Snum;

            while (Mod!=0)
            {
                Fnum=Snum;
                Snum=Mod;
                Mod=Fnum%Snum;
            }
            cout<<"\n The Highest Common Factor :"<<Snum<<endl;
            text();
            cin>>repeat;
            system("cls");
	}while(repeat=='y'||repeat=='Y');
	     
}