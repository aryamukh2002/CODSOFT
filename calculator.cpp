#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
       
        cout << "Menu-driven Calculator" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Perform the selected operation
        switch (choice) {
            case 1:
                cout << "Enter two numbers to add: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Enter two numbers to subtract: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Enter two numbers to multiply: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Enter two numbers to divide: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            case 5:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option (1-5)." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
