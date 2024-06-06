#include <iostream>

using namespace std;

class Employee {
    protected:
        string name;
        double baseSalary;
    
    public:
        Employee(string n, double salary) {
            name = n;
            baseSalary = salary;
        }
    
        virtual double calculateSalary() {
            return baseSalary;
        }
    
};



class Manager : public Employee {
    private:
        double bonus;
    
    public:
        Manager(string n, double salary, double b) : Employee(n, salary) {
            bonus = b;
            
        }
    
        double calculateSalary() {
            return baseSalary + bonus;
        }
};




class Engineer : public Employee {
    private:
        double overtimeHours;
        double hourlyRate;
    
    public:
        Engineer(string n, double salary, double hours, double rate) : Employee(n, salary) {
            overtimeHours = hours;
            hourlyRate = rate;
        }
    
        double calculateSalary() {
            return baseSalary + (overtimeHours * hourlyRate);
        }
};




class Salesperson : public Employee {
    private:
        double commission;
    
    public:
        Salesperson(string n, double salary, double c) : Employee(n, salary) {
            commission = c;
        }
    
        double calculateSalary() {
            return baseSalary + (commission * baseSalary);
        }
};

int main() {
    Employee *emp1 = new Manager("John", 50000, 10000);
    Employee *emp2 = new Engineer("Alice", 60000, 100, 20);
    Employee *emp3 = new Salesperson("Bob", 40000, 0.05);

    cout << "Salary for " << emp1->calculateSalary() << endl;
    cout << "Salary for " << emp2->calculateSalary() << endl;
    cout << "Salary for " << emp3->calculateSalary() << endl;

    return 0;
}