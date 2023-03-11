// Определение конструкторов и методов класса RecordBook
#include "pch.h"
#include <iostream>
#include "RecordBook.h"

using namespace std;

// Конструкторы
RecordBook::RecordBook() {}
RecordBook::RecordBook(string lname, string sid)
{
    lastName = lname;
    studentId = sid;
}

// Метод для ввода данных о студенте
void RecordBook::init()
{
    cout << "Enter the student's last name: ";
    getline(cin, lastName);
    cout << "Enter the number of the book: ";
    getline(cin, studentId);
}

// Метод для вывода данных о студенте
void RecordBook::display()
{
    cout << "Student's last name: " << lastName << endl;
    cout << "Book number: " << studentId << endl;
}

// Метод для добавления предмета и оценки
void RecordBook::addSubject(string subject, int mark)
{
    subjects[subject] = mark;
}

// Метод для вывода предметов и оценок, оценка выше minMark
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

// Метод для вычисления средней оценки по всем предметам
double RecordBook::calculateAverageMark() const
{
    double sum = 0.0;
    for (auto const& [subject, mark] : subjects)
    {
        sum += mark;
    }
    return (subjects.empty() ? 0.0 : sum / subjects.size());
}

// Метод для получения фамилии студента
string RecordBook::getLastName() const
{
    return lastName;
}

// Метод для получения номера книжки студента
string RecordBook::getStudentId() const
{
    return studentId;
}
