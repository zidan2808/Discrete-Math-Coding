#include <iostream>
using namespace std;


void text(){
	cout<<" Do you want repeat the program again? (y/n) : ";
}

int main(){
	char repeat;
	do{
		
		int a,b, manyrel, yestrue = 0;
		cout<<" Input a : ";
		cin>>a;
		cout<<" Input b : ";
		cin>>b;
	
		int A[a],B[b];
		for(int i=0;i<a;i++){
			cout<<" Input value A "<<i+1<<" : ";
			cin>>A[i];
		}
		for(int i=0;i<b;i++){
			cout<<" Input value B "<<i+1<<" : ";
			cin>>B[i];
		}
		cout<<" How many relation do you want? : ";
		cin>>manyrel;
		int relA[manyrel], relB[manyrel];
		if(manyrel%2 !=0){
			cout<<" The relation can't symmetrical because the total is odd\n\n";
			text();
			cin>>repeat;
			system("cls");
		}else{
			for(int i = 0; i<manyrel; i++){
				inputA :
					cout<<" Enter the relation in set A at ";cin>>relA[i];
					if(relA[i]>a){
						cout<<" Opss sorry there is no order of set A to-"<<relA[i]<<" \n\n Enter Again : \n";
						goto inputA;
					}
				
				inputB :
					cout<<" with set B at ";cin>>relB[i];
					if(relB[i]>b){
						cout<<" Opss sorry there is no order of set B to-"<<relB[i]<<" \n\n Enter again relation ";
						goto inputB;
					}
			}
		}
		system("cls");
		cout<<" Set of A = { "<<A[0];
		for(int i=1;i<a;i++){
			cout<<", "<<A[i];
		}cout<<"}\n\n Set of B = { "<<B[0];
		for(int i=1;i<b;i++){
			cout<<", "<<B[i];
		}cout<<"}\n\n";
		for (int i = 0; i<manyrel; i++){
			for (int j = 0; j<manyrel; j++){
				if(i!=j){
					if(relA[i] == relB[j]&&relB[i] == relA[j]){
						yestrue++;
						break;
					}
				}
			}
		}
		cout<<" R ={";
		cout<<"("<<A[relA[0]]<<","<<B[relB[0]]<<")";
		for(int i = 1; i<manyrel; i++){
			cout<<", ("<<A[relA[i]]<<","<<B[relB[i]]<<")";
		}
		cout<<"}\n\n";
		if(yestrue==manyrel){
			cout<<" The relation is symmetrical";
			text();
			cin>>repeat;
			system("cls");
		}else{
			cout<<" The relation is not symmetrical";
			text();
			cin>>repeat;
			system("cls");
		}
	}while (repeat=='y'||repeat=='Y');
	return 0;
}