#include <iostream>
#include "Student.h"
#include "Course.h"
#include "Enrollment.h"
using namespace std;

int main() {
    Enrollment system;
    int choice;

    do {
        cout << "\n--- University Enrollment System ---\n";
        cout << "1. Add Student\n2. Add Course\n3. Enroll Student\n4. Show Students\n5. Show Courses\n6. Show Enrollments\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            int id; string name;
            cout << "Enter Student ID: "; cin >> id;
            cout << "Enter Student Name: "; cin.ignore(); getline(cin, name);
            system.addStudent(Student(id, name));
        }
        else if(choice == 2) {
            int code; string title;
            cout << "Enter Course Code: "; cin >> code;
            cout << "Enter Course Title: "; cin.ignore(); getline(cin, title);
            system.addCourse(Course(code, title));
        }
        else if(choice == 3) {
            int sid, cid;
            cout << "Enter Student ID: "; cin >> sid;
            cout << "Enter Course Code: "; cin >> cid;
            system.enrollStudent(sid, cid);
        }
        else if(choice == 4) system.displayStudents();
        else if(choice == 5) system.displayCourses();
        else if(choice == 6) system.displayEnrollments();
    } while(choice != 0);

    return 0;
}
