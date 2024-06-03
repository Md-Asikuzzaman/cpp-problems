#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    float mileage; // Mileage of the vehicle
    float price;   // Price of the vehicle
public:
    // Constructor
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
    // Constructor
    Car(float _mileage, float _price, float _ownershipCost, int _warranty, int _seatingCapacity, string _fuelType)
        : Vehicle(_mileage, _price), ownershipCost(_ownershipCost), warranty(_warranty),
          seatingCapacity(_seatingCapacity), fuelType(_fuelType) {}
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
    // Constructor
    Bike(float _mileage, float _price, int _numCylinders, int _numGears,
         string _coolingType, string _wheelType, float _fuelTankSize)
        : Vehicle(_mileage, _price), numCylinders(_numCylinders), numGears(_numGears),
          coolingType(_coolingType), wheelType(_wheelType), fuelTankSize(_fuelTankSize) {}
};

// Subclass Audi of Car
class Audi : public Car {
protected:
    string modelType;  // Model type of Audi
public:
    // Constructor
    Audi(float _mileage, float _price, float _ownershipCost, int _warranty, int _seatingCapacity,
         string _fuelType, string _modelType)
        : Car(_mileage, _price, _ownershipCost, _warranty, _seatingCapacity, _fuelType), modelType(_modelType) {}
};

// Subclass Ford of Car
class Ford : public Car {
protected:
    string modelType;  // Model type of Ford
public:
    // Constructor
    Ford(float _mileage, float _price, float _ownershipCost, int _warranty, int _seatingCapacity,
         string _fuelType, string _modelType)
        : Car(_mileage, _price, _ownershipCost, _warranty, _seatingCapacity, _fuelType), modelType(_modelType) {}
};

// Subclass Bajaj of Bike
class Bajaj : public Bike {
protected:
    string makeType;  // Make type of Bajaj
public:
    // Constructor
    Bajaj(float _mileage, float _price, int _numCylinders, int _numGears,
          string _coolingType, string _wheelType, float _fuelTankSize, string _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}
};

// Subclass TVS of Bike
class TVS : public Bike {
protected:
    string makeType;  // Make type of TVS
public:
    // Constructor
    TVS(float _mileage, float _price, int _numCylinders, int _numGears,
        string _coolingType, string _wheelType, float _fuelTankSize, string _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}
};

int main() {
    // Example usage
    Audi audi(20.5, 3500000, 3000, 3, 5, "Petrol", "A6");
    Bajaj pulsar(50.2, 120000, 1, 6, "Air", "Alloys", 12, "Pulsar 220F");

    return 0;
}
