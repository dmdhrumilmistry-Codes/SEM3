#pragma once
#include<iostream>

struct Library{
	struct{
		char name[15],shelf[5];
		int id;
	}Book;
	int section;
	
	void FindBook(char book[]){
		bool Presence = strcmp(book,this->Book.name);
	
		if(Presence == 0) {
			std::cout<<this->Book.name<<" Was Found"<<std::endl;	
		}else{
			std::cout<< this->Book.name<<" Not Found"<<std::endl;
		}
	}
	
};
