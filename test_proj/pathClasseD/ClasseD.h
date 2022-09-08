#include<memory>

using namespace std;

class ClasseD{

	public:
		ClasseD();
        unique_ptr<int> &&getMyNumberPointer();
		
	private:
		unique_ptr<int>	myNumber;
		
};


