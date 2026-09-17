#include <iostream>
using namespace std;

int inputInt(int &numero){
    try{
        cin>>numero;
        return numero;
    }
    catch(...){
        return 1;
    }
}
