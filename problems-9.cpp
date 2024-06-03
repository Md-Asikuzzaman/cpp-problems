#include <iostream>
#include <stdexcept>

using namespace std;

// Function to read two double type numbers from keyboard
void readNumbers(double& num1, double& num2) {
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Check if input is successful
    if (cin.fail()) {
        cin.clear(); // Clear the error flag
        throw invalid_argument("Invalid input: Please enter valid numbers.");
    }
}

// Function to calculate the division of two numbers
double divideNumbers(double num1, double num2) {
    // Check if the divisor is zero
    if (num2 == 0) {
        throw runtime_error("Divide by zero error: Cannot divide by zero.");
    }
    return num1 / num2;
}

int main() {
    double num1, num2;
    try {
        readNumbers(num1, num2);
        double result = divideNumbers(num1, num2);
        cout << "Division result: " << result << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
