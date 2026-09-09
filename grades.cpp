#include <iostream>
#include <vector>

const int PASSING_GRADE = 60;

// Returns the highest value in the grades vector
int getHighestGrade(const std::vector<int>& grades) {
    int highest = grades[0];
    for (size_t i = 0; i < grades.size(); i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

// Returns the lowest value in the grades vector
int getLowestGrade(const std::vector<int>& grades) {
    int lowest = grades[0];
    for (size_t i = 0; i < grades.size(); i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

// Computes the average of all grades
float getAverageGrade(const std::vector<int>& grades) {
    int total = 0;
    for (size_t i = 0; i < grades.size(); i++) {
        total += grades[i];
    }
    return static_cast<float>(total) / grades.size();
}

// Converts a numeric average into a letter grade
char getLetterGrade(float average) {
    if (average >= 90) return 'A';
    if (average >= 80) return 'B';
    if (average >= 70) return 'C';
    if (average >= PASSING_GRADE) return 'D';
    return 'F';
}

int main() {
    int studentCount;
    std::cout << "Enter number of students: ";
    std::cin >> studentCount;

    std::vector<int> grades(studentCount);
    for (int i = 0; i < studentCount; i++) {
        std::cout << "Enter grade " << (i + 1) << ": ";
        std::cin >> grades[i];
    }

    int highest = getHighestGrade(grades);
    int lowest = getLowestGrade(grades);
    float average = getAverageGrade(grades);
    char letterGrade = getLetterGrade(average);

    std::cout << "Highest: " << highest << std::endl;
    std::cout << "Lowest: " << lowest << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Letter Grade: " << letterGrade << std::endl;

    return 0;
}
