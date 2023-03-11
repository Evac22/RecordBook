// ����������� ������������� � ������� ������ RecordBook
#include "pch.h"
#include <iostream>
#include "RecordBook.h"

using namespace std;

// ������������
RecordBook::RecordBook() {}
RecordBook::RecordBook(string lname, string sid)
{
    lastName = lname;
    studentId = sid;
}

// ����� ��� ����� ������ � ��������
void RecordBook::init()
{
    cout << "Enter the student's last name: ";
    getline(cin, lastName);
    cout << "Enter the number of the book: ";
    getline(cin, studentId);
}

// ����� ��� ������ ������ � ��������
void RecordBook::display()
{
    cout << "Student's last name: " << lastName << endl;
    cout << "Book number: " << studentId << endl;
}

// ����� ��� ���������� �������� � ������
void RecordBook::addSubject(string subject, int mark)
{
    subjects[subject] = mark;
}

// ����� ��� ������ ��������� � ������, ������ ���� minMark
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

// ����� ��� ���������� ������� ������ �� ���� ���������
double RecordBook::calculateAverageMark() const
{
    double sum = 0.0;
    for (auto const& [subject, mark] : subjects)
    {
        sum += mark;
    }
    return (subjects.empty() ? 0.0 : sum / subjects.size());
}

// ����� ��� ��������� ������� ��������
string RecordBook::getLastName() const
{
    return lastName;
}

// ����� ��� ��������� ������ ������ ��������
string RecordBook::getStudentId() const
{
    return studentId;
}
