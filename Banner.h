#pragma once
#include<iostream>

void Banner(string Heading){
	Border(33);
	std::cout<<Heading<<std::endl;
	Border(33);
}

void Border(int n){
	for(int i=0;i<=n;i++){
		std::cout<<"="<<std::flush;
	}
	std::cout<<std::endl;
}
