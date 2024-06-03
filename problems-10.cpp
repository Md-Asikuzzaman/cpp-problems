#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Constructor
    Student(string n, int m) : name(n), marks(m) {}

    // Function to display student data
    void showdata() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    // Overloading prefix increment operator ++
    Student& operator++() {
        marks++;
        return *this;
    }

    // Overloading postfix decrement operator --
    Student operator--(int) {
        Student temp = *this;
        marks--;
        return temp;
    }
};

int main() {
    // Create two objects
    Student s1("Alice", 80);
    Student s2("Bob", 75);

    // Display initial data
    cout << "Initial data:" << endl;
    s1.showdata();
    s2.showdata();
    cout << endl;

    // Perform operations ++s1 and s2--
    ++s1;
    s2--;

    // Display updated data
    cout << "Data after operations:" << endl;
    s1.showdata();
    s2.showdata();

    return 0;
}
