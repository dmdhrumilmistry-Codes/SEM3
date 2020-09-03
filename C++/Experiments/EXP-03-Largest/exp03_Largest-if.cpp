#include<iostream>
using namespace std;

int main(){
	
	//Printing Banner
	cout<<"=================================="<<endl;
	cout<<"Largest using if "<<endl;
	cout<<"=================================="<<endl;
	
	cout<<"Enter three numbers : "<<flush;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	
	int largest;
	if((n1>n2)&&(n1>n3))
		cout<<"Largest :"<<n1<<endl;
	if((n2>n1)&&(n2>n3))
		cout<<"Largest :"<<n2<<endl;
	if((n3>n1)&&(n3>n2))
		cout<<"Largest :"<<n3<<endl;
	
	//Printing Banner
	cout<<"=================================="<<endl;
	cout<<"Largest using if - else"<<endl;
	cout<<"=================================="<<endl;
	
	if((n1>n2)&&(n1>n3)){
		largest = n1;	
	}else if((n2>n1)&&(n2>n3)){
		largest = n2;	
	}else{
		largest = n3;
	}
	
	cout<<"Largest : "<<largest<<endl;
	
	//Printing Banner
	cout<<"=================================="<<endl;
	cout<<"Largest using nested if - else"<<endl;
	cout<<"=================================="<<endl;
	
	if(n1>n2){
		if(n1>n3){
			largest = n1;
		}else{
			largest = n3;
		}
	}else{
		if(n2>n3){
			largest = n2;
		}else{
			largest = n3;
		}
	}
	
	cout<<"Largest : "<<largest<<endl;
	return 0;
	
	
}
