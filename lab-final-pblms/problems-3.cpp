#include <iostream>
using namespace std;


class Student {
    private:
        string name;
        int marks;
        
    public:
        Student(string name, int marks) {
            this->name = name;
            this->marks = marks;
        }
        
        void showData() {
            cout << "Name: " << name << ", Marks: " << marks << endl;
        }

      // Overloading pre-increment operator
    Student operator++() {
        ++marks;
        return *this;
    }
    
    
    
    // Overloading post-decrement operator
    Student operator--(int) {
        Student temp = *this;
        marks--;
        return temp;
    }


};


int main() {
    
    Student s1("John", 80);
    Student s2("Alice", 90);
    
    s1.showData();
    s2.showData();
    cout << endl;
    
    ++s1;
    s2--;
    
    s1.showData();
    s2.showData();
    
    return 0;
}