#include<iostream>
#include<string>
using namespace std;

void Border(int n){
	for(int i=0;i<=n;i++){
		cout<<"="<<flush;
	}
	cout<<endl;
}

void Banner(string Heading){
	Border(33);
	cout<<Heading<<endl;
	Border(33);
}

void printPattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" "<<flush;
		}
		for(int j=1;j<=i;j++){
			cout<<"*"<<flush;
		}
		cout<<endl;
	}
}
int main(){
	Banner("Pattern");
	cout<<"Enter the number of lines : "<<flush;
	int n;
	cin>>n;
	printPattern(n);
	return 0;
}
