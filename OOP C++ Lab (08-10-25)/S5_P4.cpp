/*Cricket Player Statics
Concepts: Array of objects, sorting based on member variable 
Problem: 
Design a class Cricketer with members: playerName, matches, runs, average. 
• Read data for n players. 
• Calculate average = runs / matches. 
• Sort and display players in descending order of average runs. 
Hint: 
Use a sorting algorithm (like bubble sort) with object swapping.*/
#include <iostream>
#include <string>
using namespace std;

class Cricketer {
    string playerName;
    int matches, runs;
    double average;
public:
    Cricketer() {
        playerName = "";
        matches = 0;
        runs = 0;
        average = 0.0;
    }

    void inputData() {
        cout << "Enter Player Name, Matches and Runs: ";
        cin >> playerName >> matches >> runs;
    }

    void calcAverage() {
        if (matches != 0)
            average = static_cast<double>(runs) / matches;  //static_cast indicates
        else
            average = 0.0;
    }

    double getAverage() {
        return average;
    }

    void displayData()  {
        cout << "Player Name: " << playerName << endl;
        cout << "Matches: " << matches << endl;
        cout << "Runs: " << runs << endl;
        cout << "Average: " << average << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of players: ";
    cin >> n;

    Cricketer arr[n];   //array of objects

    for (int i = 0; i < n; i++) {
        arr[i].inputData();
        arr[i].calcAverage();
    }

    // Bubble sort based on average in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].getAverage() < arr[j + 1].getAverage()) {
                Cricketer temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nPlayers sorted by average in descending order:\n";
    for (int i = 0; i < n; i++) {
        arr[i].displayData();
    }

    return 0;
}