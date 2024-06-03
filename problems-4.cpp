#include <iostream>
#include <string>
using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    float mileage; // Mileage of the vehicle
    float price;   // Price of the vehicle
public:
    Vehicle(float _mileage, float _price) : mileage(_mileage), price(_price) {}
};

// Subclass Car
class Car : public Vehicle {
protected:
    float ownershipCost;  // Ownership cost of the car
    int warranty;         // Warranty period in years
    int seatingCapacity;  // Seating capacity of the car
    string fuelType;      // Fuel type (diesel or petrol)
public:
    Car(float _mileage, float _price, float _ownershipCost, int _warranty, int _seatingCapacity, string _fuelType)
        : Vehicle(_mileage, _price), ownershipCost(_ownershipCost), warranty(_warranty),
          seatingCapacity(_seatingCapacity), fuelType(_fuelType) {}

    void printInfo() {
        cout << "Ownership Cost: " << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: " << price << " USD" << endl;
    }
};

// Subclass Bike
class Bike : public Vehicle {
protected:
    int numCylinders;     // Number of cylinders in the bike
    int numGears;         // Number of gears in the bike
    string coolingType;   // Cooling type (air, liquid, or oil)
    string wheelType;     // Wheel type (alloys or spokes)
    float fuelTankSize;   // Fuel tank size in inches
public:
    Bike(float _mileage, float _price, int _numCylinders, int _numGears,
         string _coolingType, string _wheelType, float _fuelTankSize)
        : Vehicle(_mileage, _price), numCylinders(_numCylinders), numGears(_numGears),
          coolingType(_coolingType), wheelType(_wheelType), fuelTankSize(_fuelTankSize) {}

    void printInfo() {
        cout << "Number of Cylinders: " << numCylinders << endl;
        cout << "Number of Gears: " << numGears << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: " << price << " USD" << endl;
    }
};

// Subclass Audi of Car
class Audi : public Car {
protected:
    string modelType;  // Model type of Audi
public:
    Audi(float _mileage, float _price, float _ownershipCost, int _warranty, int _seatingCapacity,
         string _fuelType, string _modelType)
        : Car(_mileage, _price, _ownershipCost, _warranty, _seatingCapacity, _fuelType), modelType(_modelType) {}

    void printInfo() {
        cout << "Model Type: " << modelType << endl;
        Car::printInfo();
    }
};

// Subclass Ford of Car
class Ford : public Car {
protected:
    string modelType;  // Model type of Ford
public:
    Ford(float _mileage, float _price, float _ownershipCost, int _warranty, int _seatingCapacity,
         string _fuelType, string _modelType)
        : Car(_mileage, _price, _ownershipCost, _warranty, _seatingCapacity, _fuelType), modelType(_modelType) {}

    void printInfo() {
        cout << "Model Type: " << modelType << endl;
        Car::printInfo();
    }
};

// Subclass Bajaj of Bike
class Bajaj : public Bike {
protected:
    string makeType;  // Make type of Bajaj
public:
    Bajaj(float _mileage, float _price, int _numCylinders, int _numGears,
          string _coolingType, string _wheelType, float _fuelTankSize, string _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}

    void printInfo() {
        cout << "Make Type: " << makeType << endl;
        Bike::printInfo();
    }
};

// Subclass TVS of Bike
class TVS : public Bike {
protected:
    string makeType;  // Make type of TVS
public:
    TVS(float _mileage, float _price, int _numCylinders, int _numGears,
        string _coolingType, string _wheelType, float _fuelTankSize, string _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}

    void printInfo() {
        cout << "Make Type: " << makeType << endl;
        Bike::printInfo();
    }
};

int main() {
    // Create and print information of an Audi car
    Audi audi(20.5, 35000, 30000, 3, 5, "Petrol", "A6");
    cout << "Information of Audi Car:" << endl;
    audi.printInfo();
    cout << endl;

    // Create and print information of a Ford car
    Ford ford(18.2, 30000, 25000, 2, 5, "Diesel", "Mustang");
    cout << "Information of Ford Car:" << endl;
    ford.printInfo();
    cout << endl;

    // Create and print information of a Bajaj bike
    Bajaj pulsar(50.2, 2500, 1, 6, "Air", "Alloys", 12, "Pulsar 220F");
    cout << "Information of Bajaj Bike:" << endl;
    pulsar.printInfo();
    cout << endl;

    // Create and print information of a TVS bike
    TVS apache(45.6, 3000, 1, 5, "Oil", "Spokes", 10, "Apache RTR 160");
    cout << "Information of TVS Bike:" << endl;
    apache.printInfo();
    cout << endl;

    return 0;
}
