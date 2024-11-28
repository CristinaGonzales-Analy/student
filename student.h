//Filename: "student.h"
using namespace std;
#include <iostream>
#include <vector>

class Student {
    public:
        Student(string studentName);

        void addGrade(double grade);
        double getAverage();
        void printDetails();
        string getName();

    private:
    string name;
    vector<double> grades;
};