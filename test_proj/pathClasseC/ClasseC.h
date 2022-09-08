
#include<iostream>
#include<memory>
#include"../pathClasseD/ClasseD.h"


using namespace std;

class ClasseC{

	public:
		ClasseC();
		void setNumber(int number);
		
	private:
		unique_ptr<int>	myNumber;
		ClasseD classeD;
		
};

