// Author: LDT
// Date: 04APR2019
// Title: students.cpp
// Description: Creating classes, using vectors, etc.

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    int alg, datastruct, architect, proglang;
    float per;
    char grade;
public:
    Student();
    void getdata();
    void showdata();
};

Student::Student(){
    rollno = 0;
    name = "NoName";
    alg = 0;
    datastruct = 0;
    architect = 0;
    proglang = 0;
    per = 0.0;
    grade = ' ';
}

void Student::getdata(){
    string tmpStr = " ";
    cout << endl << "Enter student info:" << endl;
    cout << "Roll number? ";
    cin >> rollno;
    getline(cin, tmpStr);
    cout << endl << "First and last name? ";
    getline(cin, name);
    cout << endl << "Grade in Algorithms? ";
    cin >> alg;
    cout << endl << "Grade in Data Structures? ";
    cin >> datastruct;
    cout << endl << "Grade in Architecture? ";
    cin >> architect;
    cout << endl << "Grade in Programming Languages? ";
    cin >> proglang;
    per = (alg + datastruct + architect + proglang) / 4.0;
    if(per >= 90.0){
        grade = 'A';
    }
    else if(per >= 80.0){
        grade = 'B';
    }
    else if(per >= 70.0){
        grade = 'C';
    }
    else if(per >= 60.0){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
}

void Student::showdata(){
    cout << "Roll number of student: " << rollno << endl;
    cout << "Name of student: " << name << endl;
    cout << "Percentage of student is: " << fixed << setprecision(2) << per << endl;
    cout << "Grade of student is: " << grade << endl;
}

class Students {
    private:
        int classSize;
        vector<Student> students;
    public:
        void addStudents();
        int getClassSize();
        void setClassSize();
        void printStudents();
};

void Students::addStudents() {
    unsigned int i;
    for(i = 0; i < classSize; i++){
        Student newStudent;
        newStudent.getdata();
        students.push_back(newStudent);
    }
}

void Students::setClassSize() {
    cout << "Enter size of class: ";
    cin >> classSize;
}

int Students::getClassSize() {
    return classSize;
}

void Students::printStudents() {
    unsigned int i;
    Student stdPtr;
    for(i = 0; i < classSize; i++){
        stdPtr = students.at(i);
        stdPtr.showdata();
    }
}

int main() {
    Students students;
    students.setClassSize();
    while(students.getClassSize() < 1){
        cout << "Invalid class size" << endl;
        cout << endl;
        students.setClassSize();
    }
    students.addStudents();
    students.printStudents();
    return 0;
}