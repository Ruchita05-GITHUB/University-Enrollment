#pragma once
#include "Student.h"
#include "Course.h"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

class Enrollment {
private:
    vector<Student> students;
    vector<Course> courses;
    vector<pair<int,int>> enrollments; // pair<studentID, courseCode>

public:
    void addStudent(Student s);
    void addCourse(Course c);
    void enrollStudent(int studentID, int courseCode);
    void displayStudents();
    void displayCourses();
    void displayEnrollments();

private:
    void saveStudent(Student s);
    void saveCourse(Course c);
    void saveEnrollment(int sid, int cid);
};
