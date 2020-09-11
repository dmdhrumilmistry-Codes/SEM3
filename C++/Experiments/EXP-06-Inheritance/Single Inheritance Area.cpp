//Experiment 06 A demonstrating Single Inheritance

/*Written By Dhrumil Mistry
* on 09/11/2020
*/
#include<iostream>
using namespace std;

//Function to print Border
void Border(int n){
	for(int i=0;i<=n;i++){
		cout<<"="<<flush;
	}
	cout<<endl;
}
//Function to Print Banner
void Banner(string Heading){
	Border(50);
	cout<<Heading<<endl;
	Border(50);
}
//Base Class
class Shapes{
	public:
	
		void getData();
		void setLength(double length){
			this->length_ = length;
		}
		void setBreadth(double breadth){
			this->breadth_ = breadth;
		}
	protected:
		double length_,breadth_;
};
//Derived Class
class Rectangle: public Shapes{	
	public:
		Rectangle(double length,double breadth);
		double getArea();
};
//Derived Class Constructor
Rectangle::Rectangle(double length, double breadth){
	this->length_ = length;
	this->breadth_ = breadth;
}
//Prints Shapes Class Data
void Shapes::getData(){
	cout<<endl<<"Shape Parameters : "<<endl;
	cout<<"Length :" << this->length_<<endl;
	cout<<"Breadth : "<< this->breadth_<<endl<<endl;
	
}
//Function to calculate Area of Rectangle
double Rectangle::getArea(){
	return this->length_* this->breadth_;

}

int main(){
	Banner("Experiment 06 A Calculating Area of Rectangle");
	cout<<"Enter length and Breadth for the Rectangle :"<<endl;
	double l,b;
	cin>>l>>b;
	//Creating Object Using Custom Constructor
	Rectangle r1(l,b);
	r1.getData();
	
	cout<<"Area of Rectangle : "<<r1.getArea()<<endl;
	
	return 0;
}
