#include "student.h"

int main() {

    Student student("Cristina");

    student.addGrade(35.5);
    student.addGrade(83.0);
    student.addGrade(63.0);

    student.printDetails();

    return 0;
}

