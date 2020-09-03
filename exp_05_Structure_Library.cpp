#include<iostream>
#include<string.h>
#include"Border.h"
#include"Library.h"
using namespace std;

int main(){
	
	Banner("Library");
	
	Library L1;
	L1.section = 1;
	
	char bSearch[] = "Cleopatra";
	
	cout<<"Enter Details for Book:"<<endl;
	cout<<"Name : "<<flush;
	cin>>L1.Book.name;
	
	cout<<"Book ID : "<<flush;
	cin>>L1.Book.id;
	
	cout<<"Book Shelf : "<<flush;
	cin>>L1.Book.shelf;
	
	L1.FindBook(bSearch);
	
	return 0;
}
