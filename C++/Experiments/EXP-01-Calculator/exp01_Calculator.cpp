//Experiment 1
//Calculator
//Written By Dhrumil Mistry
#include<iostream>
using namespace std;

int main(){
	//Printing Banner
	cout<<"=================================="<<endl;
	cout<<"2 Number Calculator"<<endl;
	cout<<"=================================="<<endl;
	
	//Taking inputs
	cout<<"Enter two numbers : "<<endl;
	int n1,n2;
	cin>>n1>>n2;
	
	//Operating(logic)
	int add = n1+n2;
	int sub = n1-n2;
	int mult = n1*n2;
	int div = n1/n2;
	
	//Printing O/P
	cout<<"Add :\t"<<add<<endl;
	cout<<"Sub :\t"<<sub<<endl;
	cout<<"Mult :\t"<<mult<<endl;
	cout<<"Div:\t"<<div<<endl;
	
	return 0;
}
