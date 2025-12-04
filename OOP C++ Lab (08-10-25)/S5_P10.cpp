/*Student Result Ranking System 
Concepts: Array of objects, sorting, encapsulation, file handling (optional) 
Problem: 
Design a class Student with members: 
rollNo, name, marks[3], total, and grade.
• Calculate total and grade (A for ≥90, B for 80–89, etc.). 
• Sort the array by total marks (descending order). 
• Display the rank list (1st, 2nd, 3rd...). 
• (Optional) Write the rank list to a text file. 
Hint: 
Use encapsulation (private members, public access functions). 
Use a sorting algorithm and maintain ranks dynamically.*/
#include <iostream>
#include <string>   
using namespace std;
class Student {
    int rollNo;
    string name;
    int marks[3];
    int total;
    char grade;

    void calculateTotalAndGrade() {
        total = marks[0] + marks[1] + marks[2];
        double average = total / 3.0;

        if (average >= 90)
            grade = 'A';
        else if (average >= 80)
            grade = 'B';
        else if (average >= 70)
            grade = 'C';
        else if (average >= 60)
            grade = 'D';
        else
            grade = 'F';
    }
public:
    Student() {
        rollNo = 0;
        name = "";
        for (int i = 0; i < 3; i++)
            marks[i] = 0;
        total = 0;
        grade = 'F';
    }
    void inputData() {
        cout << "Enter Roll No and Name: ";
        cin >> rollNo >> name;
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
        calculateTotalAndGrade();
    }
    int getTotal() const {
        return total;
    }
    void displayData(int rank) const {
        cout << "Rank: " << rank << ", Roll No: " << rollNo << ", Name: " << name
             << ", Total: " << total << ", Grade: " << grade << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        students[i].inputData();
    }

    // Sort students by total marks in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].getTotal() < students[j + 1].getTotal()) {
                swap(students[j], students[j + 1]);
            }
        }
    }

    cout << "\nRank List:\n";
    for (int i = 0; i < n; i++) {
        students[i].displayData(i + 1);
    }

    delete[] students;
    return 0;
}
