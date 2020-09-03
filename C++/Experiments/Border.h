#pragma once
#include<iostream>
#include<string>

void Border(int n){
	for(int i=0;i<=n;i++){
		std::cout<<"="<<std::flush;
	}
	std::cout<<std::endl;
}

void Banner(std::string Heading){
	Border(33);
	std::cout<<Heading<<std::endl;
	Border(33);
}


