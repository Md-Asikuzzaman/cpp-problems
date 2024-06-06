#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Constructor
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void showdata() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    Student& operator++() {
        return ++marks, *this;
    }
    
    Student operator--(int) {
        return marks--, *this;
    }
    
};

int main() {
    Student s1("Alice", 80);
    Student s2("Bob", 75);

    s1.showdata();
    s2.showdata();

    ++s1;
    s2--;

    s1.showdata();
    s2.showdata();

    return 0;
}