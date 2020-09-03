//Experiment number 2 
//Swapping of Numbers
#include<iostream> 	//Written By Dhrumil Mistry
using std::cout;	// On 08/14/2020
using std::cin;
using std::endl;

int main(){
	//Printing Banner
	cout<<"=================================="<<endl;
	cout<<"Swap 2 numbers"<<endl;
	cout<<"=================================="<<endl;

	//Taking n1 as Input
	cout<<"Enter the value of n1: "<<endl;
	int n1;
	cin>>n1;
	
	//Taking n2 as Input
	cout<<"Enter the value of n2: "<<endl;
	int n2;
	cin>>n2;
	
	//Logic
	int temp = n2;
	n2 = n1;
	n1 = temp;
	
	//Displaying Output
	cout<<"After Swapping:"<<endl;
	cout<<"Values of n1, n2 :"<<n1<<" "<<n2;
	
	return 0;
}
