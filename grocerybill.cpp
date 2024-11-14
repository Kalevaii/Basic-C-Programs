
//Description: this program will caculate the grocery bill
//    based on user input



#include <iostream>
using namespace std;

int main()
{
    char choice;  //user's choice
    float weight, total_price = 0.0, total_price1 = 0.0, total_price2 = 0.0, total_price3 = 0.0;

    // Display greeting:
    cout << "Welcome to the Grocery Store!\n";

    // Get user input:
    cout << "Enter the item you wish to purchase: " << endl;
    cout << " V: Veggies \n F: Fruits \n C: Chips" << endl;
    cin >> choice;

    // TODO: Use a switch statement to evaluate the user's choice
    // Handle error checking where appropriate
    switch (choice)
    {
        case 'V':
        case 'v':  
        {
            char choice2;
            cout << "Select the vegetable you want to buy: " << endl;
            cout << "O: Onions ($0.79 per lb) \nT: Tomatoes ($0.68 per lb) \nP: Potatoes ($0.82 per lb)" << endl;
            cin >> choice2;

            switch (choice2)
            {
                case 'O':
                case 'o':
                    cout << "Enter the weight of Onions in pounds: ";
                    cin >> weight;
                    total_price1 = weight * 0.79;
                    break;

                case 'T':
                case 't':
                    cout << "Enter the weight of Tomatoes in pounds: ";
                    cin >> weight;
                    total_price2 = weight * 0.68;
                    break;

                case 'P':
                case 'p':
                    cout << "Enter the weight of Potatoes in pounds: ";
                    cin >> weight;
                    total_price3 = weight * 0.82;
                    break;

                default:
                    cout << "Invalid choice. Terminating the program." << endl;
                    break;
            }
            total_price = total_price1 + total_price2 + total_price3; 
            cout << "The total price is: $" << total_price << endl;
            break;
        }

        case 'F':
        case 'f':  
        {
            char choice2;
            cout << "Select the fruits you want to buy: " << endl;
            cout << "  G: Grapes ($1.90 per lb) \n  A: Apples ($0.98 per lb) \n  B: Bananas ($0.60 per lb)" << endl;
            cin >> choice2;

            switch (choice2)
            {
                case 'G':
                case 'g':
                    cout << "Enter the weight of Grapes in pounds: ";
                    cin >> weight;
                    total_price1 = weight * 1.90;
                    break;

                case 'A':
                case 'a':
                    cout << "Enter the weight of Apples in pounds: ";
                    cin >> weight;
                    total_price2 = weight * 0.98;
                    break;

                case 'B':
                case 'b':
                    cout << "Enter the weight of Bananas in pounds: ";
                    cin >> weight;
                    total_price3 = weight * 0.60;
                    break;

                default:
                    cout << "Invalid choice. Termaniting the Program" << endl;
                    break;
            }
            total_price = total_price1 + total_price2 + total_price3; 
            cout << "The total price is: $" << total_price << endl;
            break;   
        }

        case 'C':
        case 'c':  
        {
            char choice2;
            cout << "Select the chips you want to buy: " << endl;
            cout << "W: Wavy ($2.28) \nL: Lays ($2.50) \nR: Onion Rings ($1.50)" << endl;
            cin >> choice2;

            switch (choice2)
            {
                case 'W':
                case 'w':
                    cout << "Enter the weight of Wavy in pounds: ";
                    cin >> weight;
                    total_price1 = weight * 2.28;
                    break;

                case 'L':
                case 'l':
                    cout << "Enter the weight of Lays in pounds: ";
                    cin >> weight;
                    total_price2 = weight * 2.50;
                    break;

                case 'R':
                case 'r':
                    cout << "Enter the weight of Onion Rings in pounds: ";
                    cin >> weight;
                    total_price3 = weight * 1.50;
                    break;

                default:
                    cout << "Invalid choice. Terminating the program." << endl;
                    break;
            }
            total_price = total_price1 + total_price2 + total_price3; 
            cout << "The total price is: $" << total_price << endl;
            break; 
        }

        default:
            cout << "Invalid choice. Terminating the program" << endl;
            break;
    }



    // Exit the program:
    return 0;
}

