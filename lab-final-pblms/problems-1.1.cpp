#include <iostream>
using namespace std;

// Enum declaration outside the class
enum Period { HOURLY, WEEKLY, MONTHLY };

// Base class
class Employee {
    protected:
        string name;
        int id;
    public:
        Employee(string _name, int _id){
            name = _name;
            id = _id;
        }
        
        void display() {
            cout << "Name: " << name << ", ID: " << id << endl;
        }
};

// Derived class with compensation and period
class Employee2 : public Employee {
    protected:
        double compensation;
        Period period;
    public:
        Employee2(string name, int id, double _compensation, Period _period) : Employee(name, id) {
            compensation = _compensation;
            period = _period;
        }
    
        void display() {
            cout << "Name: " << name << ", ID: " << id << ", Compensation: " << compensation << ", Period: ";
            switch (period) {
                case HOURLY:
                    cout << "Hourly";
                    break;
                case WEEKLY:
                    cout << "Weekly";
                    break;
                case MONTHLY:
                    cout << "Monthly";
                    break;
            }
            cout << endl;
        }
};

// Derived classes for Manager, Scientist, and Laborer
class Manager2 : public Employee2 {
    public:
        Manager2(string name, int id, double compensation, Period period) : Employee2(name, id, compensation, period) {}
};

class Scientist2 : public Employee2 {
    public:
        Scientist2(string name, int id, double compensation, Period period) : Employee2(name, id, compensation, period) {}
};

class Laborer2 : public Employee2 {
    public:
        Laborer2(string name, int id, double compensation, Period period) : Employee2(name, id, compensation, period) {}
};

int main() {
    Manager2 manager("John Doe", 1001, 5000.0, WEEKLY);
    Scientist2 scientist("Jane Smith", 1002, 6000.0, MONTHLY);
    Laborer2 laborer("Tom Brown", 1003, 15.0, HOURLY);

    manager.display();
    scientist.display();
    laborer.display();

    return 0;
}