#include <iostream>
using namespace std;


class Fruit {
    protected:
        int totalFruit = 0;
        
    public:
        void addToBusket(int num) {
            totalFruit += num;
        }
        
        int getTotalFruit() {
            return totalFruit;
        }
};


class Apples: public Fruit {
    protected:
        int totalApple = 0;
    public:
        void addApple(int num){
            totalApple += num;
            addToBusket(num);
            
        }
        
        int getApple() {
            return totalApple;
        }
};


class Mangoes: public Fruit {
    protected:
        int totalMangoes = 0;
    public:
        void addMangoes(int num) {
            totalMangoes += num;
            addToBusket(num);
        }
    
        int getMangoes() {
            return totalMangoes;
        }
};

int main() {
    
    Apples appleObj;
    Mangoes mangoesObj;
    
    appleObj.addApple(906);
    mangoesObj.addMangoes(5);
    
    cout << appleObj.getApple() << endl;
    cout << mangoesObj.getMangoes() << endl;
    
    cout << appleObj.getTotalFruit() + mangoesObj.getTotalFruit();

    return 0;
}