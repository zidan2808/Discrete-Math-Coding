#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Size of the set A: ";
	cin>>a;
	cout<<"Size of the set B: ";
	cin>>b;
	int h[a],h1[b];
	cout<<"Enter the element of set A: ";
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	cout<<"Enter the element of set B: ";
	for(int i=0;i<b;i++){
		cin>>h1[i];
	}
	int count=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(h[i]==h1[j]){
				count++;
			}
		}
	}
	if(count>=a){
		cout<<"A is subset of B";
	}else{
		cout<<"A is not subset of B";
	}
}