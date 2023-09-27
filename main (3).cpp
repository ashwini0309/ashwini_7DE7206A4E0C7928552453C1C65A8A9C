#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

bool compareCGPA(const Student& a, const Student& b) {
    return a.cgpa > b.cgpa; // Sort in descending order
}

void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareCGPA);
}

int main() {
    // Test the function
    std::vector<Student> students = {
        {"John Doe", "001", 3.8},
        {"Jane Doe", "002", 3.9},
        {"Bob Smith", "003", 3.5},
        {"Alice Johnson", "004", 4.0}
    };

    std::cout << "Before sorting:\n";
    for(const auto& student : students) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << "\n";
    }

    sort_students(students);

    std::cout << "\nAfter sorting:\n";
    for(const auto& student : students) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << "\n";
    }

    return 0;
}
