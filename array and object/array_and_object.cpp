#include <iostream>

class Student {
public:
    std::string name;
    int age;
    double gpa;

    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    const int numStudents = 3;
    Student students[numStudents];

    students[0].name = "ishor badu";
    students[0].age = 20;
    students[0].gpa = 3.5;

    students[1].name = "prabhat pokhrel";
    students[1].age = 21;
    students[1].gpa = 3.8;

    students[2].name = "pradip pokhrel magar";
    students[2].age = 19;
    students[2].gpa = 3.2;

    for (int i = 0; i < numStudents; i++) {
        students[i].displayInfo();
    }

    return 0;
}
