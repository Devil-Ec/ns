#include <iostream>
#include <string>

using namespace std;

// Function to return the default password
string getDefaultPassword() {
    return "admin@123";
}

// Function to print the password as asterisks
void printPasswordObscured(const string& password) {
    cout << "Password in printed (obscured) form: ";
    for (size_t i = 0; i < password.length(); ++i) {
        cout << '*';
    }
    cout << endl;
}

// Function to get and display plain text password from user
void showPlainTextPassword() {
    string password;
    cout << "Enter your password (plain text): ";
    cin >> password;
    cout << "Password in plain text form: " << password << endl;
}

int main() {
    int choice;

    cout << "Choose an option:\n";
    cout << "1. Show Default Password\n";
    cout << "2. Show Printed Password (Obscured)\n";
    cout << "3. Enter and Show Plain Text Password\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Validate input
    if (cin.fail() || choice < 1 || choice > 3) {
        cout << "Invalid choice. Please run the program again and enter a number between 1 and 3.\n";
        return 1;
    }

    switch (choice) {
        case 1: {
            string defaultPassword = getDefaultPassword();
            cout << "Default Password: " << defaultPassword << endl;
            break;
        }
        case 2: {
            string password;
            cout << "Enter password to print in obscured form: ";
            cin >> password;
            printPasswordObscured(password);
            break;
        }
        case 3:
            showPlainTextPassword();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}