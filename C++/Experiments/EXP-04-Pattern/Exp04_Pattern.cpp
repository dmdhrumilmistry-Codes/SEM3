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

class Pattern{
public:
	int n;
	void printPattern(){
		
		for(int i=1;i<=this->n;i++){
			for(int j=1;j<=this->n-i;j++){
				cout<<" "<<flush;
			}
			for(int j=1;j<=i;j++){
				cout<<"*"<<flush;
			}
			cout<<endl;
		}
	}
};

int main(){
	Banner("Pattern");
	//Declaring Class Variable
	Pattern p1;
	//Taking Number of lines to print as Input
	cout<<"Enter the number of lines : "<<flush;
	cin>>p1.n;
	p1.printPattern();
	return 0;
}
