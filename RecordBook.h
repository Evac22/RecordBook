// Protection against multiple header file inclusion
#ifndef RECORDBOOK_H
#define RECORDBOOK_H

#include <string>
#include <map>

class RecordBook
{
private:
    std::string lastName;// Student last name
    std::string studentId;// Student's record book number
    std::map<std::string, int> subjects;// Array of items and grades


public:
    RecordBook();// Default constructor
    RecordBook(std::string lname, std::string sid);// Constructor with parameters
    void init();// Initialization of the student's last name and record book number
    void display();// Output information about the student and his progress
    void addSubject(std::string subject, int mark); // Add subject and grade
    void displaySubjects(int minMark) const;// Output a list of subjects and grades above a given threshold
    double calculateAverageMark() const;//Calculation of a student's GPA
    std::string getLastName() const;// Get the student's last name
    std::string getStudentId() const; // Get the student's gradebook number
};

#endif // RECORDBOOK_H
