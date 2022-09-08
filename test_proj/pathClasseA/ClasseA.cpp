#include "./ClasseA.h"

using namespace std;

ClasseA::ClasseA(){
	
	cout << "construtor classe A";
}


int ClasseA::somaNum(int a, int b){
	
	ClasseA::number = a + b;
	
	return a + b;
}

