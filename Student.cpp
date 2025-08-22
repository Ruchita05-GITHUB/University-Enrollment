#include "Student.h"

Student::Student() {}

Student::Student(int i, string n) : id(i), name(n) {}

int Student::getId() { return id; }

string Student::getName() { return name; }

void Student::display() {
    cout << "ID: " << id << ", Name: " << name << endl;
}
