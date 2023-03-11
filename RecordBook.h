// ������ �� �������������� ��������� ������������� ����� 
#ifndef RECORDBOOK_H
#define RECORDBOOK_H

#include <string>
#include <map>

class RecordBook
{
private:
    std::string lastName;// ������� ��������
    std::string studentId;// ����� �������� ������ ��������
    std::map<std::string, int> subjects; // ������ ��������� � ������


public:
    RecordBook();// ����������� �� ���������
    RecordBook(std::string lname, std::string sid);// ����������� � �����������
    void init();// ������������� ������� � ������ �������� ������ ��������
    void display();// ����� ���������� � �������� � ��� ������������
    void addSubject(std::string subject, int mark);; // ���������� �������� � ������
    void displaySubjects(int minMark) const;// ����� ������ ��������� � ������ ���� ��������� ������
    double calculateAverageMark() const;// ������ �������� ����� ��������
    std::string getLastName() const;// ��������� ������� ��������
    std::string getStudentId() const; // ��������� ������ �������� ������ ��������
};

#endif // RECORDBOOK_H
