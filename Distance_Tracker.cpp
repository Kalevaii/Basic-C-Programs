
//Description: this program will track run distances for the user



#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 7; // number of days
    const string WEEK[] = {"Sunday",
                           "Monday",
                           "Tuesday",
                           "Wednesday",
                           "Thursday",
                           "Friday",
                           "Saturday"};

    double distances[SIZE];
    double total = 0,average;
    int shortest_index = 0;

    cout << "Please enter the distance run." << endl;

   
    for(int i = 0; i < SIZE; i++)
    {
        cout << WEEK[i] << "  : ";
        cin >> distances[i]; 
        // TODO: Take user input for distance HERE
    }

    //TODO: Determine the total and average number of miles run
    for(int i = 0; i < SIZE; i++)
    {
        total += distances[i];
    }
    average = total / SIZE;

    //TODO: Determine the index of the day with the lowest miles
    for(int i = 1; i < SIZE; i++)
    {
        if(distances[i] < distances[shortest_index])
        {
            shortest_index = i;
        }
    }

    cout << fixed << setprecision(2)
         << "Total distance     : " << total << " miles" << endl
         << "Average distance   : " << average << " miles" << endl
         << "Shortest distance  : " << distances[shortest_index] 
         << " miles on " << WEEK[shortest_index] << endl;

    return 0;
}

