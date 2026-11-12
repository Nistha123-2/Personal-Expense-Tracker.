
#include <iostream>
using namespace std;

// Function to add expense
void addExpense(string expenseName[], int expenseAmount[], int &count) {
    if(count < 100) {
        cout << "Enter expense name: ";
        cin >> expenseName[count];

        cout << "Enter expense amount: ";
        cin >> expenseAmount[count];

        count++;

        cout << "Expense added successfully!" << endl;
    }
    else {
        cout << "Expense limit reached!" << endl;
    }
}

// Function to view expenses
void viewExpenses(string expenseName[], int expenseAmount[], int count) {
    if(count == 0) {
        cout << "No expenses available!" << endl;
    }
    else {
        for(int i = 0; i < count; i++) {
            cout << "Expense Name: " << expenseName[i] << endl;
            cout << "Expense Amount: " << expenseAmount[i] << endl;
            cout << "--------------------" << endl;
        }
    }
}

// Function to calculate total
void calculateTotal(int expenseAmount[], int count) {
    int total = 0;

    for(int i = 0; i < count; i++) {
        total = total + expenseAmount[i];
    }

    cout << "Total Expenses: " << total << endl;
}

// Function to find highest expense
void findHighest(string expenseName[], int expenseAmount[], int count) {
    if(count == 0) {
        cout << "No expenses available!" << endl;
    }
    else {
        int highest = expenseAmount[0];
        int position = 0;

        for(int i = 1; i < count; i++) {
            if(expenseAmount[i] > highest) {
                highest = expenseAmount[i];
                position = i;
            }
        }

        cout << "Highest Expense: " << highest << endl;
        cout << "Expense Name: " << expenseName[position] << endl;
    }
}

int main() {
    int choice;
    int count = 0;

    string expenseName[100];
    int expenseAmount[100];

    do {
        cout << "\n===== EXPENSE TRACKER =====" << endl;
        cout << "1. Add Expense" << endl;
        cout << "2. View All Expenses" << endl;
        cout << "3. Calculate Total Expenses" << endl;
        cout << "4. Find Highest Expense" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addExpense(expenseName, expenseAmount, count);
                break;

            case 2:
                viewExpenses(expenseName, expenseAmount, count);
                break;

            case 3:
                calculateTotal(expenseAmount, count);
                break;

            case 4:
                findHighest(expenseName, expenseAmount, count);
                break;

            case 5:
                cout << "Thank you for using Expense Tracker!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}






