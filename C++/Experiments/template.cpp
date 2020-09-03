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
	
int main(){
	Banner("");
	
	return 0;
}
