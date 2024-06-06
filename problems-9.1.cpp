#include <iostream>

using namespace std;

void readNumbers(double& num1, double& num2) {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (cin.fail()) {
        cin.clear();
        throw invalid_argument("Invalid input: Please enter valid numbers.");
    }

    if (num2 == 0) {
        throw invalid_argument("Invalid input: divide-by-zero occurs.");
    }
}

// Function to calculate the division of two numbers
double divideNumbers(double num1, double num2) {
    return num1 / num2;
}

int main() {
    try {
        double num1, num2;
        
        readNumbers(num1, num2);
        double result = divideNumbers(num1, num2);
        cout << "Division result: " << result << endl;
    } catch (invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}