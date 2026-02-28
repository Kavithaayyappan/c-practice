
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int choice;
    float amount;
    string description;
    do {
        cout << "\n1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1) {
            ofstream file("expenses.txt", ios::app);
            cout << "Enter amount: ";
            cin >> amount;
            cout << "Enter description: ";
            cin.ignore();
            getline(cin, description);
            file << amount << " " << description << endl;
            file.close();
            cout << "Expense added.\n";
        }
        else if (choice == 2) {
            ifstream file("expenses.txt");
            cout << "\n---- Expense List ----\n";
            while (file >> amount) {
                getline(file, description);
                cout << "Amount: " << amount
                     << ", Description:" << description << endl;
            }
            file.close();
        }
    } while (choice != 3);
    return 0;
}