
// Description: This program will print a triangular pattern



#include <iostream>
using namespace std;

int main() {

    int num;

    // Prompt the user for a number:
    cout << "Enter a number (3-10): ";
    cin >> num;
    cout << endl;

   
    if (num < 3 || num > 10) {
        cout << "ERROR: Valid numbers are 3 to 10" << endl;
    } else {
        
        for (int i = num; i > 0; i--) {
           
            for (int j = 0; j < i; j++) {
                if (j % 2 == 0)
                    cout << "# "; 
                else
                    cout << "@ "; 
            }
            cout << endl; 
        }
    }

    return 0;
}
