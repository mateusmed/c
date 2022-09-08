
#include<iostream>
#include<memory>
#include "./ClasseD.h"
#include "./ClasseC.h"

using namespace std;

// make_unique só funciona com classe;
// testar depois
ClasseD::ClasseD(){
        myNumber = make_unique<int>();
}

unique_ptr<int> &&ClasseD::getMyNumberPointer(){
    return move(myNumber)
}
