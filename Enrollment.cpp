#include "Enrollment.h"

void Enrollment::addStudent(Student s) {
    students.push_back(s);
    saveStudent(s);
}

void Enrollment::addCourse(Course c) {
    courses.push_back(c);
    saveCourse(c);
}

void Enrollment::enrollStudent(int studentID, int courseCode) {
    enrollments.push_back({studentID, courseCode});
    saveEnrollment(studentID, courseCode);
}

void Enrollment::displayStudents() {
    cout << "\n--- Students ---\n";
    for(auto &s : students) s.display();
}

void Enrollment::displayCourses() {
    cout << "\n--- Courses ---\n";
    for(auto &c : courses) c.display();
}

void Enrollment::displayEnrollments() {
    cout << "\n--- Enrollments ---\n";
    for(auto &e : enrollments) {
        string sname, cname;
        for(auto &s : students) if(s.getId() == e.first) sname = s.getName();
        for(auto &c : courses) if(c.getCode() == e.second) cname = c.getTitle();
        cout << "Student: " << sname << " -> Course: " << cname << endl;
    }
}

void Enrollment::saveStudent(Student s) {
    ofstream file("data/students.txt", ios::app);
    file << s.getId() << "," << s.getName() << endl;
}

void Enrollment::saveCourse(Course c) {
    ofstream file("data/courses.txt", ios::app);
    file << c.getCode() << "," << c.getTitle() << endl;
}

void Enrollment::saveEnrollment(int sid, int cid) {
    ofstream file("data/enrollments.txt", ios::app);
    file << sid << "," << cid << endl;
}
