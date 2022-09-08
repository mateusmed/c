#include <iostream>
#include <string> 

#include "./pathClasseA/ClasseA.h"
#include "./pathClasseB/ClasseB.h"
#include "./pathClasseC/ClasseC.h"
#include "./pathClasseD/ClasseD.h"


using namespace std;



void testeA(){
	
	//teste passando classeA para classeB
	
	ClasseA classeA = ClasseA();
	int resp = classeA.somaNum(1, 2);
	
	ClasseB classeB = ClasseB();
	classeB.methodB(classeA);
}

void testeB(){

	ClasseC classeC = ClasseC();
	classeC.setNumber(20);

	ClasseD classeD = ClasseD();
	unique_ptr<int> number = classeD.getMyNumberPointer();

	cout << number;
}


int main(int argc, char** argv) {
	
	
	testeB();
	
	return 0;
}
