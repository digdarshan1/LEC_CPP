#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    float marks[3];
};

float calculateAverage(Student 1, student 2) {
    float sum = 0.0;
    for (int i = 0; i < 3; ++i) {
        sum += Student.marks[i];
    }
    return sum / 3;
}

int main() {
    Student student1;
    student1.name = "John";
    student1.marks[0] = 85.0;
    student1.marks[1] = 92.5;
    student1.marks[2] = 78.0;

    Student student2;
    student2.name = "Jane";
    student2.marks[0] = 90.0;
    student2.marks[1] = 88.5;
    student2.marks[2] = 95.0;

    float avg1 = calculateAverage(student1);
    float avg2 = calculateAverage(student2);

    std::cout << "Average marks of " << student1.name << ": " << avg1 << std::endl;
    std::cout << "Average marks of " << student2.name << ": " << avg2 << std::endl;

    return 0;
}
