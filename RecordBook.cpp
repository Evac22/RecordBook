// Defining constructors and methods of the RecordBook class
#include "pch.h"
#include <iostream>
#include "RecordBook.h"

using namespace std;

// Constructors
RecordBook::RecordBook() {}
RecordBook::RecordBook(string lname, string sid)
{
    lastName = lname;
    studentId = sid;
}

// Method for entering student data
void RecordBook::init()
{
    cout << "Enter the student's last name: ";
    getline(cin, lastName);
    cout << "Enter the number of the book: ";
    getline(cin, studentId);
}

// Method for displaying student data
void RecordBook::display()
{
    cout << "Student's last name: " << lastName << endl;
    cout << "Book number: " << studentId << endl;
}

// Method for adding subject and rating
void RecordBook::addSubject(string subject, int mark)
{
    subjects[subject] = mark;
}

// Method for displaying items and grades, the grade is higher than minMark
void RecordBook::displaySubjects(int minMark) const
{
    for (auto const& [subject, mark] : subjects)
    {
        if (mark > minMark)
        {
            cout << "Subject: " << subject << ", mark: " << mark << endl;
        }
    }
}

// Method for calculating the average grade for all subjects
double RecordBook::calculateAverageMark() const
{
    double sum = 0.0;
    for (auto const& [subject, mark] : subjects)
    {
        sum += mark;
    }
    return (subjects.empty() ? 0.0 : sum / subjects.size());
}

// Method for getting the student's last name
string RecordBook::getLastName() const
{
    return lastName;
}

// Method for getting the student's book number
string RecordBook::getStudentId() const
{
    return studentId;
}
