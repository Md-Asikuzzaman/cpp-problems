#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
protected:
    int emp_id;
    string name;
    string department;

public:
    Employee(int id, string n, string dep) : emp_id(id), name(n), department(dep) {}

    virtual void displayInfo() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

class TeachingStaff : public Employee {
private:
    vector<string> courses_taught;

public:
    TeachingStaff(int id, string n, string dep, vector<string> courses) : Employee(id, n, dep), courses_taught(courses) {}

    void displayInfo() override {
        Employee::displayInfo();
        cout << "Courses Taught: ";
        for (const auto& course : courses_taught) {
            cout << course << ", ";
        }
        cout << endl;
    }
};

class NonTeachingStaff : public Employee {
private:
    string job_title;

public:
    NonTeachingStaff(int id, string n, string dep, string job) : Employee(id, n, dep), job_title(job) {}

    void displayInfo() override {
        Employee::displayInfo();
        cout << "Job Title: " << job_title << endl;
    }
};

class Faculty : public TeachingStaff {
private:
    string rank;
    string research_area;

public:
    Faculty(int id, string n, string dep, vector<string> courses, string r, string area)
        : TeachingStaff(id, n, dep, courses), rank(r), research_area(area) {}

    void displayInfo() override {
        TeachingStaff::displayInfo();
        cout << "Rank: " << rank << endl;
        cout << "Research Area: " << research_area << endl;
    }
};

class AdministrationStaff : public NonTeachingStaff {
private:
    string responsibilities;

public:
    AdministrationStaff(int id, string n, string dep, string job, string resp)
        : NonTeachingStaff(id, n, dep, job), responsibilities(resp) {}

    void displayInfo() override {
        NonTeachingStaff::displayInfo();
        cout << "Responsibilities: " << responsibilities << endl;
    }
};

int main() {
    // Example usage
    vector<string> courses {"Mathematics", "Physics"};
    Faculty faculty(101, "John Doe", "Science", courses, "Professor", "Applied Physics");
    faculty.displayInfo();

    cout << endl;

    AdministrationStaff admin(201, "Jane Smith", "Administration", "Secretary", "Managing office tasks");
    admin.displayInfo();

    return 0;
}
