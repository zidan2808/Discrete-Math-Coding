#include <iostream>
using namespace std;

int main(){
	int a, b, c=0;
	cout<<" Enter the length of the set A : ";
	cin>>a;
	cout<<" Enter the length of the set B : ";
	cin>>b;
	
	int A[a], B[b], C[a];
	cout<<" Enter value of set A : ";
	for(int i = 0; i < a; i++){
		cin>>A[i];
	}
	cout<<" Enter value of set B : ";
	for(int i = 0; i < b; i++){
		cin>>B[i];
	}
	
	system("cls");
	cout<<"\n Set of A =  {"<<A[0];
	for(int i = 1; i < a; i++){
		cout<<", "<<A[i];
	}cout<<"}";
	cout<<"\n Set of  B =  {"<<B[0];
	for(int i = 1; i < b; i++){
		cout<<", "<<B[i];
	}cout<<"}";
	
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			if(A[i]==B[j]){
				C[c]=A[i];
				c++;
				break;	
			}
		}
	}

	cout<<"\n\n A Slice B = {"<<C[0];
	for(int i = 1; i < c; i++){
		cout<<", "<<C[i];
	}cout<<"}";
	return 0;
}
