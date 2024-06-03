#include <iostream>
using namespace std;

// Class Fruit
class Fruit {
protected:
    int totalFruits; // Total number of fruits in the basket
public:
    Fruit() : totalFruits(0) {} // Constructor to initialize totalFruits to 0

    void addToBasket(int num) {
        totalFruits += num; // Add fruits to the basket
    }

    int getTotalFruits() const {
        return totalFruits; // Get the total number of fruits in the basket
    }
};

// Class Apples, a subclass of Fruit
class Apples : public Fruit {
    int numApples; // Number of apples in the basket
public:
    Apples() : numApples(0) {} // Constructor to initialize numApples to 0

    void addApples(int num) {
        numApples += num; // Add apples to the basket
        addToBasket(num); // Update totalFruits
    }

    int getApples() const {
        return numApples; // Get the number of apples in the basket
    }
};

// Class Mangoes, a subclass of Fruit
class Mangoes : public Fruit {
    int numMangoes; // Number of mangoes in the basket
public:
    Mangoes() : numMangoes(0) {} // Constructor to initialize numMangoes to 0

    void addMangoes(int num) {
        numMangoes += num; // Add mangoes to the basket
        addToBasket(num); // Update totalFruits
    }

    int getMangoes() const {
        return numMangoes; // Get the number of mangoes in the basket
    }
};

int main() {
    // Create objects for Apples and Mangoes
    Apples appleBasket;
    Mangoes mangoBasket;

    // Add fruits to the baskets
    appleBasket.addApples(5);
    mangoBasket.addMangoes(3);
    appleBasket.addApples(2);

    // Display the number of fruits of each type and the total number of fruits
    cout << "Number of Apples: " << appleBasket.getApples() << endl;
    cout << "Number of Mangoes: " << mangoBasket.getMangoes() << endl;
    cout << "Total number of fruits: " << appleBasket.getTotalFruits() + mangoBasket.getTotalFruits() << endl;

    return 0;
}
