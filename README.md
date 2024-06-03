## C++ Problems solving...

```

#include <iostream>
using namespace std;

// Base class Mammals
class Mammals {
public:
    void mammalFunction() {
        cout << "I am a mammal" << endl;
    }
};

// Base class MarineAnimals
class MarineAnimals {
public:
    void marineFunction() {
        cout << "I am a marine animal" << endl;
    }
};

// Derived class BlueWhale
class BlueWhale : public Mammals, public MarineAnimals {
public:
    void bothCategories() {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};

int main() {
    // Creating objects for each class
    Mammals mammalObj;
    MarineAnimals marineObj;
    BlueWhale blueWhaleObj;

    // Calling functions for each object
    mammalObj.mammalFunction();
    marineObj.marineFunction();
    blueWhaleObj.mammalFunction();
    blueWhaleObj.marineFunction();
    blueWhaleObj.bothCategories();

    return 0;
}

```

