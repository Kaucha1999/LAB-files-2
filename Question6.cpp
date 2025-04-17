#include <iostream>
#include <cstring> // for strcmp
using namespace std;

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    const int MAX = 100;
    Student students[MAX];
    int count = 0;
    int choice;

    do {
        cout << "Metropolia Students Record\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (count >= MAX) {
                    cout << "Student list full!" << endl;
                    break;
                }

                cout << "Enter student name: ";
                cin.ignore(); // to clear leftover newline
                cin.getline(students[count].name, 50);

                cout << "Enter student ID: ";
                cin >> students[count].id;

                cout << "Enter student grade: ";
                cin >> students[count].grade;

                count++;
                cout << "Student added successfully!\n";
                break;
            }

            case 2: {
                if (count == 0) {
                    cout << "No students to display.\n";
                    break;
                }

                cout << "\n--- Student List ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "Name: " << students[i].name << endl;
                    cout << "ID: " << students[i].id << endl;
                    cout << "Grade: " << students[i].grade << endl;
                    cout << "-------------------\n";
                }
                break;
            }

            case 3: {
                int searchId;
                cout << "Enter ID to search: ";
                cin >> searchId;
                bool found = false;

                for (int i = 0; i < count; i++) {
                    if (students[i].id == searchId) {
                        cout << "Student Found!\n";
                        cout << "Name: " << students[i].name << endl;
                        cout << "ID: " << students[i].id << endl;
                        cout << "Grade: " << students[i].grade << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Student with ID " << searchId << " not found.\n";
                }
                break;
            }

            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
