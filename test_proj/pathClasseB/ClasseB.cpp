#include "./ClasseB.h"
#include "../pathClasseA/ClasseA.h"
#include <string> 
#include <iostream>

using namespace std;


/*
class ClasseB{
	
	ClasseB(){
	
	} 

	methodB(ClasseA &classeA){
		
		int myNumber = classeA.number;
		
		cout << myNumber;
	}

};
*/



ClasseB::ClasseB(){
	
} 


void ClasseB::methodB(ClasseA &classeA){
	
	int myNumber = classeA.number;
	
	cout << myNumber;
}

