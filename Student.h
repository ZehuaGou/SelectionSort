//
// Created by Li Ersan on 2018/12/1.
//

#ifndef SELECTIONSORT_STUDENT_H
#define SELECTIONSORT_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;

    bool operator<(const Student &otherStudent) {
        return score != otherStudent.score ? score > otherStudent.score : name < otherStudent.name;
    }

    friend ostream &operator<<(ostream &os, const Student &student) {
        os << "Student:" << student.name << " " << student.score;
        return os;
    }
};

#endif //SELECTIONSORT_STUDENT_H
