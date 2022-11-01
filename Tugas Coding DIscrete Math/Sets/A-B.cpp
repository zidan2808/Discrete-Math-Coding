#include<iostream>
using namespace std;

int Count( bool isThere[],int ha[],int hb[],int b,int a){
	int c=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(ha[j]==hb[i]&&isThere[i]!=true){
				isThere[i]=true;
				c++;
			}
		}
	}
	return c;
}
int CountIsThere(int queue[],bool isThere[],int ha[],int a){
	int k=0;
	for(int i=0;i<a;i++){
		if(isThere[i]==false){
			queue[k]=ha[i];
			k++;
		}	
	}
	return k;
}
int main(){
	int a,b;
	cout<<"Input the Set size of A : ";
	cin>>a;
	cout<<"Input the Set size of B : ";
	cin>>b;
	bool isThere[a];
	int ha[a];
	int hb[b];
	int count=0;
	
	cout<<"Input the value of A Set: ";
	for(int i=0;i<a;i++){
		cin>>ha[i];
		isThere[i]=false;
	}
	cout<<"Input the value of B Set: ";
	for(int i=0;i<b;i++){
		cin>>hb[i];
	}
	int rSize=a-Count(isThere,hb,ha,a,b);
	int queue[rSize];
	cout<<"Result : ";
	if(CountIsThere( queue,isThere,ha,a)<=0){
		cout<<"Empty Set";
	}else {
		for(int i=0;i<rSize;i++){
			cout<<queue[i]<<" ";
		}
	}
	cout<<endl;

}
