#pragma once
#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    int code;
    string title;
public:
    Course();
    Course(int c, string t);
    int getCode();
    string getTitle();
    void display();
};
