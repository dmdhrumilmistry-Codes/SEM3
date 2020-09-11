//Experiment 06 B demonstrating Multiple Inheritance

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
	Border(33);
	cout<<Heading<<endl;
	Border(33);
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
//Base Class
class Paint{
	public:
		void setCost(double cost){
			this->cost_ = cost;
		}
	protected:
		double cost_;
};
//Derived Class
class Rectangle: public Shapes,public Paint{	
	public:
		Rectangle(double length,double breadth, double cost);
		double getArea();
		double getPaintingCost(){
			return this->getArea() * this->cost_;
		}
};

//Constructor of Derived Class
Rectangle::Rectangle(double length, double breadth,double cost = 1){
	this->length_ = length;
	this->breadth_ = breadth;
	this->cost_ = cost;
}
//Prints Shapes Class Parameter
void Shapes::getData(){
	cout<<"Length :" << this->length_<<endl;
	cout<<"Breadth : "<< this->breadth_<<endl;
}
//Function to Calculate Area
double Rectangle::getArea(){
	return this->length_* this->breadth_;
}

int main(){
	Banner("Experiment 06 B Painting Cost");
	cout<<"Enter length and Breadth for the Rectangle :"<<flush;
	double l,b;
	cin>>l>>b;
	
	cout<<"Enter Paint cost per unit square : "<<endl;
	double cost;
	cin>>cost;
	//Creating Object using Custom Constructor
	Rectangle r1(l,b,cost);
	cout<<"Painting Cost : "<<r1.getPaintingCost()<<" Rs."<<endl;
	
	return 0;
}
