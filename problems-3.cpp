#include <iostream>
using namespace std;

// Base class Marks
class Marks {
protected:
    static int rollNumberCounter; // Static counter to generate roll numbers
    int rollNumber; // Roll number of the student
    string name; // Name of the student
public:
    Marks(string studentName) : name(studentName) {
        rollNumber = ++rollNumberCounter; // Assign roll number and increment the counter
    }
    int getRollNumber() const {
        return rollNumber; // Return the roll number
    }
    string getName() const {
        return name; // Return the name of the student
    }
};

// Initialize the static member outside the class definition
int Marks::rollNumberCounter = 0;

// Derived class Physics
class Physics : public Marks {
    float physicsMarks; // Marks in Physics
public:
    Physics(string studentName, float marks) : Marks(studentName), physicsMarks(marks) {}

    float getPhysicsMarks() const {
        return physicsMarks; // Return marks in Physics
    }
};

// Derived class Chemistry
class Chemistry : public Marks {
    float chemistryMarks; // Marks in Chemistry
public:
    Chemistry(string studentName, float marks) : Marks(studentName), chemistryMarks(marks) {}

    float getChemistryMarks() const {
        return chemistryMarks; // Return marks in Chemistry
    }
};

// Derived class Mathematics
class Mathematics : public Marks {
    float mathematicsMarks; // Marks in Mathematics
public:
    Mathematics(string studentName, float marks) : Marks(studentName), mathematicsMarks(marks) {}

    float getMathematicsMarks() const {
        return mathematicsMarks; // Return marks in Mathematics
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cin.ignore(); // Ignore newline character left in buffer

    // Input marks for each student and calculate totals
    float totalPhysics = 0, totalChemistry = 0, totalMath = 0;
    for (int i = 0; i < numStudents; ++i) {
        string name;
        float physics, chemistry, mathematics;
        cout << "Enter the name of student " << i + 1 << ": ";
        getline(cin, name);
        cout << "Enter marks in Physics: ";
        cin >> physics;
        cout << "Enter marks in Chemistry: ";
        cin >> chemistry;
        cout << "Enter marks in Mathematics: ";
        cin >> mathematics;
        cin.ignore(); // Ignore newline character left in buffer

        // Create objects for each subject
        Physics physicsStudent(name, physics);
        Chemistry chemistryStudent(name, chemistry);
        Mathematics mathStudent(name, mathematics);

        // Calculate total marks
        totalPhysics += physicsStudent.getPhysicsMarks();
        totalChemistry += chemistryStudent.getChemistryMarks();
        totalMath += mathStudent.getMathematicsMarks();
    }

    // Calculate and display the average marks
    float avgPhysics = totalPhysics / numStudents;
    float avgChemistry = totalChemistry / numStudents;
    float avgMath = totalMath / numStudents;

    // Display the results
    cout << "\nClass Average:\n";
    cout << "Physics: " << avgPhysics << endl;
    cout << "Chemistry: " << avgChemistry << endl;
    cout << "Mathematics: " << avgMath << endl;

    return 0;
}
