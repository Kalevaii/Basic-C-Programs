
//Description: this program will print a sequence of even and odd numbers




#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function prototypes:
int getUserChoice();
void findEvenNumbers();
void findOddNumbers();

int main()
{
	int user_choice;

	do{
		cout << endl
			 << "What would you like to do?" << endl
			 << "1. Find even numbers 0 - N" << endl
			 << "2. Find odd numbers 0 - N" << endl
			 << "3. Quit program" << endl << endl;

		cout << "Enter your choice: ";
		user_choice = getUserChoice(); 

		switch(user_choice)
		{
			case 1:
				findEvenNumbers(); 
				break;
			case 2:
				findOddNumbers(); 
				break;
			case 3:
				cout << "Terminating program..." << endl;
				break;
			default:
				cout << "ERROR: Invalid choice. Select a valid menu item."
				     << endl << endl;
		}

	}while( user_choice != 3 );

	return 0;
}

// Function definitions:


int getUserChoice()
{
	int choice;
	cin >> choice;
	return choice;
}


void findEvenNumbers()
{
	int N;
	cout << "Enter N: ";
	cin >> N;
	cout << "Even numbers: ";
	for (int i = 0; i <= N; i += 2)
	{
		cout << i << " ";
	}
	cout << endl;
}


void findOddNumbers()
{
	int N;
	cout << "Enter N: ";
	cin >> N;
	cout << "Odd numbers: ";
	for (int i = 1; i <= N; i += 2)
	{
		cout << i << " ";
	}
	cout << endl;
}
