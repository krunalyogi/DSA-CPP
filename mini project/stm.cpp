#include <iostream>
using namespace std;

void StudentNameInput(string name[], int marks[], int size) {
    cout << "------ENTER STUDENT DETAILS------" << endl;

    for (int i = 0; i < size; i++) {
        cout << "Enter student name: ";
        cin >> name[i];

        cout << "Enter student marks: ";
        cin >> marks[i];
    }

    cout << "----------DATA ENTERED SUCCESSFULLY----------" << endl;
}

void StudentData(string name[], int marks[], int size) {
    cout << "------STUDENT LIST------" << endl;

    for (int i = 0; i < size; i++) {
        cout << name[i] << " : " << marks[i] << endl;
    }
}

void FindTopper(string name[], int marks[], int size) {
    cout << "------FINDING TOPPER------" << endl;

    int topperIndex = 0;

    for (int i = 1; i < size; i++) {
        if (marks[i] > marks[topperIndex]) {
            topperIndex = i;
        }
    }

    cout << "Topper : " << name[topperIndex] << endl;
    cout << "Marks  : " << marks[topperIndex] << endl;
}

void FindAverage(int marks[], int size) {
    cout << "------AVERAGE MARKS------" << endl;

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }

    double avg = (double)sum / size;

    cout << "Average Marks : " << avg << endl;
}

void SearchByName(string name[], int size) {
    string sname;
    bool found = false;

    cout << "Who are you looking for? : ";
    cin >> sname;

    for (int i = 0; i < size; i++) {
        if (sname == name[i]) {
            cout << sname << " exists in database at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found." << endl;
    }
}

int main() {

    const int MAX_STUDENTS = 100;

    int marks[MAX_STUDENTS];
    string name[MAX_STUDENTS];

    int count;

    cout << "How many students do you want to enter? : ";
    cin >> count;

    if (count <= 0 || count > MAX_STUDENTS) {
        cout << "Invalid number of students." << endl;
        return 0;
    }

    bool dataEntered = false;
    int userInput;

    cout << "\n----------WELCOME TO STUDENT MANAGEMENT SYSTEM----------\n";

    while (true) {

        cout << "\n0. Exit" << endl;
        cout << "1. Add Students" << endl;
        cout << "2. Show Student List" << endl;
        cout << "3. Find Topper" << endl;
        cout << "4. Find Average" << endl;
        cout << "5. Search Student" << endl;

        cout << "\nEnter your choice: ";
        cin >> userInput;

        switch (userInput) {

            case 0:
                cout << "Exiting Program..." << endl;
                return 0;

            case 1:
                StudentNameInput(name, marks, count);
                dataEntered = true;
                break;

            case 2:
                if (dataEntered) {
                    StudentData(name, marks, count);
                } else {
                    cout << "No student data available. Add students first." << endl;
                }
                break;

            case 3:
                if (dataEntered) {
                    FindTopper(name, marks, count);
                } else {
                    cout << "No student data available. Add students first." << endl;
                }
                break;

            case 4:
                if (dataEntered) {
                    FindAverage(marks, count);
                } else {
                    cout << "No student data available. Add students first." << endl;
                }
                break;

            case 5:
                if (dataEntered) {
                    SearchByName(name, count);
                } else {
                    cout << "No student data available. Add students first." << endl;
                }
                break;

            default:
                cout << "Invalid choice. Please enter a number between 0 and 5." << endl;
        }
    }

    return 0;
}