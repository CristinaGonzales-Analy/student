#include "student.h"
#include <iostream>
using namespace std; 

Student::Student(string studentName) {
    name = studentName;
}


void Student::addGrade(double grade) {
    grades.push_back(grade);
}


double Student::getAverage() {
    if (grades.empty()) {
        return 0.0;
    }
    double sum = 0.0;
   for (int i = 0; i < grades.size(); i++) {
    sum += grades[i];
}
    double average = sum / grades.size();

    
    return average;
}

string Student::getName() {
    return name;
}


void Student::printDetails() {
    cout << "Student Name: " << getName() << endl;
    cout << "Average Grade: " << getAverage() << endl;
}
