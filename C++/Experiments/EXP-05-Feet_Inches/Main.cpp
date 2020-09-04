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
	
struct Distance{
	int feet;
	float inc;
};

int main(){
	Banner("Sum of Distances");
	
	Distance d1,d2,sum;
	
	cout<<"Enter the Feet and inches : "<<endl;
	//For d1
	cout<<"For Distance 1:"<<endl;
	cout<<"Feet : "<<endl;
	cin>>d1.feet;
	cout<<"Inches : "<<endl;
	cin>>d1.inc;
	
	//For d2
	cout<<"For Distance 1:"<<endl;
	cout<<"Feet : "<<endl;
	cin>>d2.feet;
	cout<<"Inches : "<<endl;
	cin>>d2.inc;
	
	sum.feet = d1.feet + d2.feet;
	sum.inc =  d1.inc + d2.inc;
	
	if(sum.inc>12){
		sum.inc-=12;
		sum.feet++;
	}	
	
	cout<<"Sum of Distances"<<endl;
	cout<<"Feet : "<<sum.feet<<endl;
	cout<<"Inches : "<<sum.inc<<endl;
	
	return 0;
}
