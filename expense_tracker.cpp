#include <iostream>
using namespace std;

int main() {
    int choice;
    string item;
    float amount, total = 0;

    do {
        cout << "\n===== EXPENSE TRACKER =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Total Expense\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter expense name: ";
                cin >> item;

                cout << "Enter amount: ";
                cin >> amount;

                total += amount;
                cout << "Expense added successfully!\n";
                break;

            case 2:
                cout << "Total Expense: Rs. " << total << endl;
                break;

            case 3:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}