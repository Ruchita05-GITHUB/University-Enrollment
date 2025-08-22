#include "Course.h"

Course::Course() {}

Course::Course(int c, string t) : code(c), title(t) {}

int Course::getCode() { return code; }

string Course::getTitle() { return title; }

void Course::display() {
    cout << "Code: " << code << ", Title: " << title << endl;
}
