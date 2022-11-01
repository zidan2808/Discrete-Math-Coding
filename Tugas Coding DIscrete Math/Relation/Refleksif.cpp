#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"Size of set A: ";
	cin>>a;
	cout<<"Element of set A: ";
	int arr[a];
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	cout<<"Size of set B : ";
	cin>>b;
	int r[b][2];
	cout<<"Element of set B(a,b) : "<<endl;
	for(int i=0;i<b;i++){
		for(int j=0;j<2;j++){
			cin>>r[i][j];
		}
	}
	int count=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(arr[i]==r[j][0]&&arr[i]==r[j][1]){
				count++;
			}
		}
	}
	if(count>=a){
		cout<<"is Reflexive";
	}else {
		cout<<"is not Reflexive";
	}
}