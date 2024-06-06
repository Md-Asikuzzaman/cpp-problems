#include <iostream>
using namespace std;


class Mammals {
    public:
        void mammalFun() {
            cout << "I am mammal" << endl;
        }
    
};


class MarineAnimals {
    public:
        void marineFun() {
            cout << "I am a marine animal" << endl;
        }   
};

class BlueWhale: public Mammals, public MarineAnimals {
    public:
        void BlueWhileFun() {
            cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
        }
    
};


int main() {
    
    Mammals mammalsObj;
    MarineAnimals marineObj;
    BlueWhale blueObj;
    
    
    mammalsObj.mammalFun();
    marineObj.marineFun();
    
    blueObj.BlueWhileFun();
    blueObj.mammalFun();
    blueObj.marineFun();
    
    
    return 0;
}