#include <iostream> 
#include <limits> 

using namespace std; 
double add(double, double); 
double subtract(double, double); 
double multiply(double, double); 
double divide(double, double); 
 
int main() { 
    double num1, num2, result; 
    int choice; 
    char repeat; 
    cout << "==========================================" << endl; 
    cout << "           ADVANCED CALCULATOR PROGRAM    " << endl; 
    cout << "==========================================" << endl; 
    do { 
        // Input first number 
        cout << "\n Enter first number: "; 
        cin >> num1; 


        // Input validation 
        if (cin.fail()) { 
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input! Please enter numeric values only." << endl; 
            continue; 
        } 


        // Input second number 
        cout << "Enter second number: "; 
        cin >> num2; 
 
        if (cin.fail()) { 
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input! Please enter numeric values only." << endl; 
            continue; 
        } 
 
        // Display calculator menu 
        cout << "\nSelect Operation:" << endl; 
        cout << "1. Addition" << endl; 
        cout << "2. Subtraction" << endl; 
        cout << "3. Multiplication" << endl; 
        cout << "4. Division" << endl; 
        cout << "Enter your choice (1-4): "; 
        cin >> choice; 

        // Perform operation using switch case 
        switch (choice) { 
            case 1: 
                result = add(num1, num2); 
                cout << "Result = " << result << endl; 
                break; 
            case 2: 
                result = subtract(num1, num2); 
                cout << "Result = " << result << endl; 
                break; 
            case 3: 
                result = multiply(num1, num2); 
                cout << "Result = " << result << endl; 
                break; 
            case 4: 
                if (num2 == 0) { 
                    cout << "Error! Division by zero is not allowed." << endl; 
                } else { 
                    result = divide(num1, num2); 
                    cout << "Result = " << result << endl; 
                } 
                break; 
            default: 
                cout << "Invalid choice! Please select between 1 and 4." << endl; 
        } 


        // Ask user to continue 
        cout << "\nDo you want to perform another calculation? (y/n): "; 
        cin >> repeat; 
 
    } 
    
    while (repeat == 'y' || repeat == 'Y'); 
    cout << "\nThank you for using the calculator!" << endl; 
    cout << "Have a great day       " << endl; 
    return 0; 
} 
double add(double a, double b) { 
    return a + b; 
} 
double subtract(double a, double b) { 
    return a - b; 
} 
double multiply(double a, double b) { 
    return a * b; 
} 
double divide(double a, double b) { 
    return a / b; 
}