#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
public:
    Student();
    Student(int i, string n);
    int getId();
    string getName();
    void display();
};
