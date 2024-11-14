
// Description: This program implements a simple bank ATM system



#include <iostream>

using namespace std;

// Function Prototypes:
char getactInput();
float checkbalance(float);
float withdraw(float, float);
float deposit(float, float);

int main()
{
    int sum;
    char option, cont;
    float balance = 1000;
    int a=1;

    cout << "Welcome to Bobcat Banking!" << endl;

    do {
        
        option = getactInput();
        while(!(option == 'A'|| option == 'B'||option == 'C' || option == 'a'|| option == 'b'||option == 'c')){
                  cout << "ERROR: Invalid option." <<endl; // Output error message
                cout << "select a valid option: "; 
                cin >> option;
        }

        switch (option) {
            case 'A':
            case 'a':
                cout << "Your account balance is $" << checkbalance(balance) << endl;
                break;
            case 'B':
            case 'b':
                cout << "Enter the amount: $";
                cin >> sum;
                balance = withdraw(balance, sum);
                cout << "Your account balance: $" << balance << endl;
                break;
            case 'C':
            case 'c':
                cout << "Enter the amount: $";
                cin >> sum;
                balance = deposit(balance, sum);
                cout << "Your account balance: $" << balance << endl;
                break;
            default:
               // cout << "ERROR: Invalid option." ; // Output error message
              //  cout << "select a valid option: "; 
                // Prompt for valid option
                      
                break;
        }

        cout << "\nWould you like to continue? (y/n): ";
        cin >> cont;

    } while (cont == 'Y' || cont == 'y' );

    return 0;
}


char getactInput() {
    char choice;
    cout << "\nSelect an option from the following:\n";
    cout << "a) Check Balance\n";
    cout << "b) Withdraw\n";
    cout << "c) Deposit\n";
    cout << "Please select an option: ";
    cin >> choice;
    return choice;
}

float checkbalance(float balance) {
    return balance;
}

float withdraw(float balance, float amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        cout << "ERROR: Insufficient balance." << endl;
    }
    return balance;
}

float deposit(float balance, float amount) {
    balance += amount;
    return balance;
}
